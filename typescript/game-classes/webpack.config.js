const path = require('path');

module.exports = {
  entry:'./source/main.ts',
  output:{
    path: path.resolve(__dirname, 'build'),
    filename: 'bundle.js'
  },
  resolve:{
    extensions:['.ts','.js']
  },
  module:{
    rules:[{test:/\.ts$/,
      use: [{
        loader:'ts-loader',
        options:{
          configFile:'tsconfig.json'
        }
      }]}

    ]
  },
};
