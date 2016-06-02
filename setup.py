from distutils.core import setup, Extension

setup(
    name='spam',
    ext_modules=[
        Extension(
            'spam',
            ['spammodule.c'],
        )
    ],
)