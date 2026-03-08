project('sdl2-splash', 'c',
        version : '0.1',
        default_options : ['warning_level=3'])

sdl2_dep = dependency('sdl2')

executable('splash-launcher',
           'splash.c',
           dependencies : sdl2_dep,
           install : true)