const path = require('path');
const alias = require('esbuild-plugin-alias');

// console.log('参数',argv);
// let node = process. argv.splice ( 0 ); // 获取node
// let js_name = process. argv.splice ( 1 ); // 获取执行的js的完整路径
const arguments = process.argv.splice(2); // 参数数组
// console.log('参数',arguments);
// var arg1 = arguments [ 0 ]; // 获取arg1
// var arg2 = arguments [ 1 ]; // 获取arg2

// const entry = path.resolve(__dirname, './test/animate/2/index.jsx')
let entry = path.resolve(__dirname, "./demo/calculator/index.jsx");

if(arguments.length == 0) {
  console.warn('没有输入入口文件，将使用默认值');
} else {
 entry = path.resolve(__dirname, arguments[0]);
}


require('esbuild').build({
    entryPoints: [entry],
    bundle: true,
    platform: 'neutral',
    external: ['path', 'fs'],
    allowOverwrite: true,
    outfile: path.resolve(path.dirname(entry), 'index.js'),
    plugins: [
      alias({
        'lvgljs-ui': path.resolve(__dirname, './src/render/react/index.js'),
      }),
    ],
}).catch(() => process.exit(1))