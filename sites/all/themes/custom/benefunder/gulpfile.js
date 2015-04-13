// Include gulp & gulp plugins
var gulp = require('gulp'),
  jshint = require('gulp-jshint'),
  less = require('gulp-less-sourcemap'),
  stylish = require('jshint-stylish'),
  autoprefixer = require('gulp-autoprefixer');

// Lint task
gulp.task('lint', function() {
  return gulp.src('js/main.js')
    .pipe(jshint())
    .pipe(jshint.reporter(stylish));
});

// Compile LESS files
gulp.task('less', function() {
  return gulp.src('less/style.less')
    .pipe(less({
      sourceMap: {
        sourceMapRootpath: '../less'
      }
    }))
    .pipe(gulp.dest('./css'));
});

// Autoprefix CSS
gulp.task('autoprefix', function() {
  return gulp.src('./css/style.css')
      .pipe(autoprefixer({
        browsers: ['> 1%', 'last 2 versions', 'Firefox ESR', 'Opera 12.1', 'IE 9'],
        cascade: true
      }))
    .pipe(gulp.dest('./css'));
});

// Watch files for changes
gulp.task('watch', function() {
  gulp.watch('js/main.js', ['lint']);
  gulp.watch('less/*.less', ['less']);
  gulp.watch('css/style.css', ['autoprefix']);
});

// Default task
gulp.task('default', ['lint', 'less', 'autoprefix', 'watch']);


