#include <Python.h>

/*[clinic input]
module spam
[clinic start generated code]*/
/*[clinic end generated code: output=da39a3ee5e6b4b0d input=fb02dbff56054488]*/

#include "clinic/spammodule.c.h"

/*[clinic input]
spam.system

  statement: 's'
    a statement string to run through the system call
  /

Execute a shell command.
[clinic start generated code]*/

static PyObject *
spam_system_impl(PyModuleDef *module, const char *statement)
/*[clinic end generated code: output=abfb2f1f48e7f5a7 input=e4343d85b0fe35d6]*/
{
    int sts = system(statement);
    return PyLong_FromLong(sts);
}


static PyMethodDef SpamMethods[] = {
    SPAM_SYSTEM_METHODDEF
    {NULL, NULL, 0, NULL}        /* Sentinel */
};


static struct PyModuleDef spammodule = {
   PyModuleDef_HEAD_INIT,
   "spam",                 /* name of module */
   spam_system__doc__, /* module documentation, may be NULL */
   -1,                     /* size of per-interpreter state of the module,
                              or -1 if the module keeps state in global variables. */
   SpamMethods
};


PyMODINIT_FUNC
PyInit_spam(void)
{
    return PyModule_Create(&spammodule);
}
