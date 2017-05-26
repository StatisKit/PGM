#include "_pgm.h"



namespace autowig
{

    void method_decorator_93cdc2537e4254778c4a3e4b015fe9b4(class ::std::vector< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > > & instance, ::std::vector< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >::size_type  param_in_0, ::std::vector< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >::reference  param_out)     { instance.at(param_in_0) = param_out; }
    void method_decorator_476ebb71e9545739b534c7ce3e108d26(class ::std::vector< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > > & instance, ::std::vector< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >::reference  param_out)     { instance.front() = param_out; }
    void method_decorator_8b17f122232c54bcba4d74fb1acaf64d(class ::std::vector< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > > & instance, ::std::vector< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >::reference  param_out)     { instance.back() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::vector< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > > const volatile * get_pointer<class ::std::vector< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > > const volatile >(class ::std::vector< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_dc44e89dda6d5b81a483c9baba5e5548()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    void  (::std::vector< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, ::std::allocator< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >::*method_pointer_0bcc3ad7ba7d511789f14dbbfa2b5445)(::std::vector< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >::size_type , ::std::vector< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >::value_type const &) = &::std::vector< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >::assign;
    ::std::vector< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >::size_type  (::std::vector< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, ::std::allocator< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >::*method_pointer_cb28a622c61e59ae90c6bea88866608c)() const = &::std::vector< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >::size;
    ::std::vector< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >::size_type  (::std::vector< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, ::std::allocator< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >::*method_pointer_0529ef5298e751d5aaffa36d58e67ffd)() const = &::std::vector< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >::max_size;
    ::std::vector< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >::size_type  (::std::vector< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, ::std::allocator< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >::*method_pointer_3ef6418a2ec45eae8cdc3f3ba6b1a10b)() const = &::std::vector< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >::capacity;
    bool  (::std::vector< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, ::std::allocator< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >::*method_pointer_5eed256bca515ba586b0f9ac45fd970d)() const = &::std::vector< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >::empty;
    void  (::std::vector< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, ::std::allocator< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >::*method_pointer_a95d9d1328db53c3bec89e2778a282d8)(::std::vector< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >::size_type ) = &::std::vector< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >::reserve;
    ::std::vector< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >::reference  (::std::vector< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, ::std::allocator< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >::*method_pointer_93cdc2537e4254778c4a3e4b015fe9b4)(::std::vector< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >::size_type ) = &::std::vector< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >::at;
    ::std::vector< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >::const_reference  (::std::vector< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, ::std::allocator< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >::*method_pointer_c463f194f87556428198cd1189dbd749)(::std::vector< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >::size_type ) const = &::std::vector< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >::at;
    ::std::vector< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >::reference  (::std::vector< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, ::std::allocator< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >::*method_pointer_476ebb71e9545739b534c7ce3e108d26)() = &::std::vector< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >::front;
    ::std::vector< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >::const_reference  (::std::vector< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, ::std::allocator< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >::*method_pointer_0d04106fc2095634aa4c77c6a5f64593)() const = &::std::vector< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >::front;
    ::std::vector< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >::reference  (::std::vector< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, ::std::allocator< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >::*method_pointer_8b17f122232c54bcba4d74fb1acaf64d)() = &::std::vector< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >::back;
    ::std::vector< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >::const_reference  (::std::vector< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, ::std::allocator< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >::*method_pointer_1f920ffda9815ca8ba9926333829f370)() const = &::std::vector< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >::back;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > * (::std::vector< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, ::std::allocator< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >::*method_pointer_d261aa77530d56408b9be308e9235fef)() = &::std::vector< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >::data;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const * (::std::vector< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, ::std::allocator< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >::*method_pointer_ccbc789f0cba578495f63a54fad68250)() const = &::std::vector< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >::data;
    void  (::std::vector< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, ::std::allocator< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >::*method_pointer_ea519dbd96655fc1a5bfb54fff7b9ec6)(::std::vector< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >::value_type const &) = &::std::vector< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >::push_back;
    void  (::std::vector< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, ::std::allocator< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >::*method_pointer_99568d4519ac5a6b97eee15eeb9b56e3)() = &::std::vector< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >::pop_back;
    void  (::std::vector< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, ::std::allocator< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >::*method_pointer_66809403f55258eda484fb89b8abb658)(class ::std::vector< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > > &) = &::std::vector< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >::swap;
    void  (::std::vector< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, ::std::allocator< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >::*method_pointer_157a221ab8ee58fbb83729cf6a627e9d)() = &::std::vector< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >::clear;
    boost::python::class_< class ::std::vector< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >, autowig::Held< class ::std::vector< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > > >::Type > class_dc44e89dda6d5b81a483c9baba5e5548("_Vector_dc44e89dda6d5b81a483c9baba5e5548", "", boost::python::no_init);
    class_dc44e89dda6d5b81a483c9baba5e5548.def(boost::python::init<  >(""));
    class_dc44e89dda6d5b81a483c9baba5e5548.def(boost::python::init< class ::std::vector< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > > const & >(""));
    class_dc44e89dda6d5b81a483c9baba5e5548.def("assign", method_pointer_0bcc3ad7ba7d511789f14dbbfa2b5445, "");
    class_dc44e89dda6d5b81a483c9baba5e5548.def("__len__", method_pointer_cb28a622c61e59ae90c6bea88866608c, "");
    class_dc44e89dda6d5b81a483c9baba5e5548.def("max_size", method_pointer_0529ef5298e751d5aaffa36d58e67ffd, "");
    class_dc44e89dda6d5b81a483c9baba5e5548.def("capacity", method_pointer_3ef6418a2ec45eae8cdc3f3ba6b1a10b, "");
    class_dc44e89dda6d5b81a483c9baba5e5548.def("empty", method_pointer_5eed256bca515ba586b0f9ac45fd970d, "");
    class_dc44e89dda6d5b81a483c9baba5e5548.def("reserve", method_pointer_a95d9d1328db53c3bec89e2778a282d8, "");
    class_dc44e89dda6d5b81a483c9baba5e5548.def("at", method_pointer_93cdc2537e4254778c4a3e4b015fe9b4, boost::python::return_internal_reference<>(), "");
    class_dc44e89dda6d5b81a483c9baba5e5548.def("at", autowig::method_decorator_93cdc2537e4254778c4a3e4b015fe9b4);
    class_dc44e89dda6d5b81a483c9baba5e5548.def("at", method_pointer_c463f194f87556428198cd1189dbd749, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_dc44e89dda6d5b81a483c9baba5e5548.def("front", method_pointer_476ebb71e9545739b534c7ce3e108d26, boost::python::return_internal_reference<>(), "");
    class_dc44e89dda6d5b81a483c9baba5e5548.def("front", autowig::method_decorator_476ebb71e9545739b534c7ce3e108d26);
    class_dc44e89dda6d5b81a483c9baba5e5548.def("front", method_pointer_0d04106fc2095634aa4c77c6a5f64593, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_dc44e89dda6d5b81a483c9baba5e5548.def("back", method_pointer_8b17f122232c54bcba4d74fb1acaf64d, boost::python::return_internal_reference<>(), "");
    class_dc44e89dda6d5b81a483c9baba5e5548.def("back", autowig::method_decorator_8b17f122232c54bcba4d74fb1acaf64d);
    class_dc44e89dda6d5b81a483c9baba5e5548.def("back", method_pointer_1f920ffda9815ca8ba9926333829f370, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_dc44e89dda6d5b81a483c9baba5e5548.def("data", method_pointer_d261aa77530d56408b9be308e9235fef, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_dc44e89dda6d5b81a483c9baba5e5548.def("data", method_pointer_ccbc789f0cba578495f63a54fad68250, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_dc44e89dda6d5b81a483c9baba5e5548.def("push_back", method_pointer_ea519dbd96655fc1a5bfb54fff7b9ec6, "");
    class_dc44e89dda6d5b81a483c9baba5e5548.def("pop_back", method_pointer_99568d4519ac5a6b97eee15eeb9b56e3, "");
    class_dc44e89dda6d5b81a483c9baba5e5548.def("swap", method_pointer_66809403f55258eda484fb89b8abb658, "");
    class_dc44e89dda6d5b81a483c9baba5e5548.def("clear", method_pointer_157a221ab8ee58fbb83729cf6a627e9d, "");

    struct vector_dc44e89dda6d5b81a483c9baba5e5548_from_python
    {
        vector_dc44e89dda6d5b81a483c9baba5e5548_from_python()
        {
            boost::python::converter::registry::push_back(
                &convertible,
                &construct,
                boost::python::type_id< class ::std::vector< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > > >());
        }

        static void* convertible(PyObject* obj_ptr)
        { return obj_ptr; }

        static void construct(PyObject* obj_ptr, boost::python::converter::rvalue_from_python_stage1_data* data)
        {
            boost::python::handle<> obj_iter(PyObject_GetIter(obj_ptr));
            void* storage = ((boost::python::converter::rvalue_from_python_storage< class ::std::vector< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > > >*)data)->storage.bytes;
            new (storage) class ::std::vector< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >();
            data->convertible = storage;
            class ::std::vector< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >& result = *((class ::std::vector< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::std::allocator< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > > >*)storage);
            unsigned int i = 0;
            for(;; i++)
            {
                boost::python::handle<> py_elem_hdl(boost::python::allow_null(PyIter_Next(obj_iter.get())));
                if(PyErr_Occurred())
                { boost::python::throw_error_already_set(); }
                if(!py_elem_hdl.get())
                { break; }
                boost::python::object py_elem_obj(py_elem_hdl);
                result.push_back(boost::python::extract< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  >(py_elem_obj));
            }
        }
    };

    vector_dc44e89dda6d5b81a483c9baba5e5548_from_python();
}