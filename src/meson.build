qt5 = import('qt5')
qt5Libs = dependency('qt5', modules: ['Core', 'Gui', 'Widgets'])

if target_machine.system() == 'windows'
	qt5Libs += dependency('qt5', modules: ['Main'])
endif

nablaSrcs = [
	'nabla.cxx', 'mainWindow.cxx'
]

nablaUIs = qt5.preprocess(
	ui_files: [
		'ui/nabla.ui'
	]
)

nabla = executable(
	'nabla',
	nablaSrcs + nablaUIs,
	dependencies: [qt5Libs, threading],
	gnu_symbol_visibility: 'inlineshidden'
)
