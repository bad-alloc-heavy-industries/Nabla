project(
	'Nabla',
	'cpp',
	default_options: [
		'buildtype=release',
		'cpp_std=c++17',
		'warning_level=3',
		'b_ndebug=if-release',
		'b_lto=true',
		'strip=true'
	],
	license: 'BSD-3-Clause',
	version: '0.0.1',
	meson_version: '>= 0.52'
)

cxx = meson.get_compiler('cpp')
substrate = include_directories('substrate')
threading = dependency('threads')

subdir('src')
