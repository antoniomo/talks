/* This file was generated by PyBindGen 0.0.0.0 */
#define PY_SSIZE_T_CLEAN
#include <Python.h>
#include <stddef.h>


#if PY_VERSION_HEX >= 0x03000000
#if PY_VERSION_HEX >= 0x03050000
typedef PyAsyncMethods* cmpfunc;
#else
typedef void* cmpfunc;
#endif
#define PyCObject_FromVoidPtr(a, b) PyCapsule_New(a, NULL, b)
#define PyCObject_AsVoidPtr(a) PyCapsule_GetPointer(a, NULL)
#define PyString_FromString(a) PyBytes_FromString(a)
#define Py_TPFLAGS_CHECKTYPES 0 /* this flag doesn't exist in python 3 */
#endif


#if     __GNUC__ > 2
# define PYBINDGEN_UNUSED(param) param __attribute__((__unused__))
#elif     __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ > 4)
# define PYBINDGEN_UNUSED(param) __attribute__((__unused__)) param
#else
# define PYBINDGEN_UNUSED(param) param
#endif  /* !__GNUC__ */

#ifndef _PyBindGenWrapperFlags_defined_
#define _PyBindGenWrapperFlags_defined_
typedef enum _PyBindGenWrapperFlags {
   PYBINDGEN_WRAPPER_FLAG_NONE = 0,
   PYBINDGEN_WRAPPER_FLAG_OBJECT_NOT_OWNED = (1<<0),
} PyBindGenWrapperFlags;
#endif


#include "libgolib.h"
/* --- module functions --- */


PyObject *
_wrap_pygolib_Sum(PyObject * PYBINDGEN_UNUSED(dummy), PyObject *args, PyObject *kwargs)
{
    PyObject *py_retval;
    long long retval;
    long long a;
    long long b;
    const char *keywords[] = {"a", "b", NULL};

    if (!PyArg_ParseTupleAndKeywords(args, kwargs, (char *) "LL", (char **) keywords, &a, &b)) {
        return NULL;
    }
    retval = Sum(a, b);
    py_retval = Py_BuildValue((char *) "L", retval);
    return py_retval;
}
PyObject * _wrap_pygolib_Sum(PyObject * PYBINDGEN_UNUSED(dummy), PyObject *args, PyObject *kwargs);

static PyMethodDef pygolib_functions[] = {
    {(char *) "Sum", (PyCFunction) _wrap_pygolib_Sum, METH_VARARGS|METH_KEYWORDS, "Sum(a, b)\n\ntype: a: long long\ntype: b: long long" },
    {NULL, NULL, 0, NULL}
};
#if PY_VERSION_HEX >= 0x03000000
static struct PyModuleDef pygolib_moduledef = {
    PyModuleDef_HEAD_INIT,
    "pygolib",
    NULL,
    -1,
    pygolib_functions,
};
#endif


#if PY_VERSION_HEX >= 0x03000000
    #define MOD_ERROR NULL
    #define MOD_INIT(name) PyObject* PyInit_##name(void)
    #define MOD_RETURN(val) val
#else
    #define MOD_ERROR
    #define MOD_INIT(name) void init##name(void)
    #define MOD_RETURN(val)
#endif
#if defined(__cplusplus)
extern "C"
#endif
#if defined(__GNUC__) && __GNUC__ >= 4
__attribute__ ((visibility("default")))
#endif


MOD_INIT(pygolib)
{
    PyObject *m;
    #if PY_VERSION_HEX >= 0x03000000
    m = PyModule_Create(&pygolib_moduledef);
    #else
    m = Py_InitModule3((char *) "pygolib", pygolib_functions, NULL);
    #endif
    if (m == NULL) {
        return MOD_ERROR;
    }
    return MOD_RETURN(m);
}
