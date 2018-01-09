var lang = require('language-classifier');
var fs = require('fs');
var path = require('path')
input_dir = process.argv[2]
output_dir = process.argv[3]


var name_lookup = {
  'ruby': 'ruby',
  'python': 'python',
  'javascript': 'javascript',
  'objective-c': 'c',
  'html': 'javascript',
  'css': 'javascript',
  'shell': 'c',
  'c++': 'cc',
  'c': 'c'
};

var extension_lookup = {
  'ruby': 'rb',
  'python': 'py',
  'javascript': 'js',
  'c': 'c',
  'cc': 'cpp'
}



fs.readdir(input_dir, (err, files) => {
  files.forEach(file => {
    var old_filename = path.join(input_dir,file);
    fs.readFile(old_filename, 'utf8', function(err, data) {

        if (err) throw err;

        var new_filename = path.join(output_dir, path.join(name_lookup[lang(data)], file.slice(0, file.length - 4) + '.' + extension_lookup[name_lookup[lang(data)]]));
        fs.rename(old_filename, new_filename)
        fs.unlink(old_filename)
    });
  });
})
