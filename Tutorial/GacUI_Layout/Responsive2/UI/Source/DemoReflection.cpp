﻿/***********************************************************************
!!!!!! DO NOT MODIFY !!!!!!

GacGen.exe Resource.xml

This file is generated by Workflow compiler
https://github.com/vczh-libraries
***********************************************************************/

#include "DemoReflection.h"

#if defined( _MSC_VER)
#pragma warning(push)
#pragma warning(disable:4250)
#elif defined(__GNUC__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wparentheses-equality"
#elif defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wparentheses-equality"
#endif

/***********************************************************************
Reflection
***********************************************************************/

namespace vl
{
	namespace reflection
	{
		namespace description
		{
#ifndef VCZH_DEBUG_NO_REFLECTION
			IMPL_CPP_TYPE_INFO(demo::AccountButtonTemplate)
			IMPL_CPP_TYPE_INFO(demo::AccountButtonTemplateConstructor)
			IMPL_CPP_TYPE_INFO(demo::AccountButtonViewModel)
			IMPL_CPP_TYPE_INFO(demo::AccountItemTemplate)
			IMPL_CPP_TYPE_INFO(demo::AccountItemTemplateConstructor)
			IMPL_CPP_TYPE_INFO(demo::AccountMenuItemTemplate)
			IMPL_CPP_TYPE_INFO(demo::AccountMenuItemTemplateConstructor)
			IMPL_CPP_TYPE_INFO(demo::MainWindow)
			IMPL_CPP_TYPE_INFO(demo::MainWindowConstructor)
			IMPL_CPP_TYPE_INFO(demo::VideoItemTemplate)
			IMPL_CPP_TYPE_INFO(demo::VideoItemTemplateConstructor)
			IMPL_CPP_TYPE_INFO(demo::VideoViewModel)

#define _ ,
			BEGIN_CLASS_MEMBER(::demo::AccountButtonTemplate)
				CLASS_MEMBER_CONSTRUCTOR(::demo::AccountButtonTemplate*(), NO_PARAMETER)
				CLASS_MEMBER_METHOD(GetViewModel, NO_PARAMETER)
				CLASS_MEMBER_METHOD(SetViewModel, { L"__vwsn_value_" })
				CLASS_MEMBER_EVENT(ViewModelChanged)
				CLASS_MEMBER_FIELD(__vwsn_prop_ViewModel)
				CLASS_MEMBER_PROPERTY_EVENT(ViewModel, GetViewModel, SetViewModel, ViewModelChanged)
			END_CLASS_MEMBER(::demo::AccountButtonTemplate)

			BEGIN_CLASS_MEMBER(::demo::AccountButtonTemplateConstructor)
				CLASS_MEMBER_CONSTRUCTOR(::vl::Ptr<::demo::AccountButtonTemplateConstructor>(), NO_PARAMETER)
				CLASS_MEMBER_METHOD(__vwsn_initialize_instance_, { L"__vwsn_this_" })
				CLASS_MEMBER_FIELD(__vwsn_precompile_0)
				CLASS_MEMBER_FIELD(__vwsn_precompile_1)
				CLASS_MEMBER_FIELD(__vwsn_precompile_10)
				CLASS_MEMBER_FIELD(__vwsn_precompile_2)
				CLASS_MEMBER_FIELD(__vwsn_precompile_3)
				CLASS_MEMBER_FIELD(__vwsn_precompile_4)
				CLASS_MEMBER_FIELD(__vwsn_precompile_5)
				CLASS_MEMBER_FIELD(__vwsn_precompile_6)
				CLASS_MEMBER_FIELD(__vwsn_precompile_7)
				CLASS_MEMBER_FIELD(__vwsn_precompile_8)
				CLASS_MEMBER_FIELD(__vwsn_precompile_9)
				CLASS_MEMBER_FIELD(self)
			END_CLASS_MEMBER(::demo::AccountButtonTemplateConstructor)

			BEGIN_CLASS_MEMBER(::demo::AccountButtonViewModel)
				CLASS_MEMBER_CONSTRUCTOR(::vl::Ptr<::demo::AccountButtonViewModel>(), NO_PARAMETER)
				CLASS_MEMBER_METHOD(GetController, NO_PARAMETER)
				CLASS_MEMBER_METHOD(GetImage, NO_PARAMETER)
				CLASS_MEMBER_METHOD(GetName, NO_PARAMETER)
				CLASS_MEMBER_METHOD(SetController, { L"__vwsn_value_" })
				CLASS_MEMBER_METHOD(SetImage, { L"__vwsn_value_" })
				CLASS_MEMBER_METHOD(SetName, { L"__vwsn_value_" })
				CLASS_MEMBER_FIELD(__vwsn_prop_Controller)
				CLASS_MEMBER_FIELD(__vwsn_prop_Image)
				CLASS_MEMBER_FIELD(__vwsn_prop_Name)
				CLASS_MEMBER_PROPERTY(Controller, GetController, SetController)
				CLASS_MEMBER_PROPERTY(Image, GetImage, SetImage)
				CLASS_MEMBER_PROPERTY(Name, GetName, SetName)
			END_CLASS_MEMBER(::demo::AccountButtonViewModel)

			BEGIN_CLASS_MEMBER(::demo::AccountItemTemplate)
				CLASS_MEMBER_CONSTRUCTOR(::demo::AccountItemTemplate*(::vl::Ptr<::demo::AccountButtonViewModel>), { L"__vwsn_ctor_parameter_ViewModel" })
				CLASS_MEMBER_METHOD(GetViewModel, NO_PARAMETER)
				CLASS_MEMBER_FIELD(__vwsn_parameter_ViewModel)
				CLASS_MEMBER_PROPERTY_READONLY(ViewModel, GetViewModel)
			END_CLASS_MEMBER(::demo::AccountItemTemplate)

			BEGIN_CLASS_MEMBER(::demo::AccountItemTemplateConstructor)
				CLASS_MEMBER_CONSTRUCTOR(::vl::Ptr<::demo::AccountItemTemplateConstructor>(), NO_PARAMETER)
				CLASS_MEMBER_METHOD(__vwsn_initialize_instance_, { L"__vwsn_this_" })
				CLASS_MEMBER_FIELD(__vwsn_precompile_0)
				CLASS_MEMBER_FIELD(__vwsn_precompile_1)
				CLASS_MEMBER_FIELD(__vwsn_precompile_2)
				CLASS_MEMBER_FIELD(ViewModel)
			END_CLASS_MEMBER(::demo::AccountItemTemplateConstructor)

			BEGIN_CLASS_MEMBER(::demo::AccountMenuItemTemplate)
				CLASS_MEMBER_CONSTRUCTOR(::demo::AccountMenuItemTemplate*(::vl::Ptr<::demo::AccountButtonViewModel>), { L"__vwsn_ctor_parameter_ViewModel" })
				CLASS_MEMBER_METHOD(GetViewModel, NO_PARAMETER)
				CLASS_MEMBER_FIELD(__vwsn_parameter_ViewModel)
				CLASS_MEMBER_PROPERTY_READONLY(ViewModel, GetViewModel)
			END_CLASS_MEMBER(::demo::AccountMenuItemTemplate)

			BEGIN_CLASS_MEMBER(::demo::AccountMenuItemTemplateConstructor)
				CLASS_MEMBER_CONSTRUCTOR(::vl::Ptr<::demo::AccountMenuItemTemplateConstructor>(), NO_PARAMETER)
				CLASS_MEMBER_METHOD(__vwsn_initialize_instance_, { L"__vwsn_this_" })
				CLASS_MEMBER_FIELD(__vwsn_precompile_0)
				CLASS_MEMBER_FIELD(__vwsn_precompile_1)
				CLASS_MEMBER_FIELD(__vwsn_precompile_2)
				CLASS_MEMBER_FIELD(ViewModel)
			END_CLASS_MEMBER(::demo::AccountMenuItemTemplateConstructor)

			BEGIN_CLASS_MEMBER(::demo::MainWindow)
				CLASS_MEMBER_CONSTRUCTOR(::demo::MainWindow*(), NO_PARAMETER)
				CLASS_MEMBER_METHOD(__vwsn_instance_ctor_, NO_PARAMETER)
				CLASS_MEMBER_FIELD(accounts)
				CLASS_MEMBER_FIELD(videos)
			END_CLASS_MEMBER(::demo::MainWindow)

			BEGIN_CLASS_MEMBER(::demo::MainWindowConstructor)
				CLASS_MEMBER_CONSTRUCTOR(::vl::Ptr<::demo::MainWindowConstructor>(), NO_PARAMETER)
				CLASS_MEMBER_METHOD(__vwsn_initialize_instance_, { L"__vwsn_this_" })
				CLASS_MEMBER_FIELD(__vwsn_precompile_0)
				CLASS_MEMBER_FIELD(__vwsn_precompile_1)
				CLASS_MEMBER_FIELD(__vwsn_precompile_10)
				CLASS_MEMBER_FIELD(__vwsn_precompile_11)
				CLASS_MEMBER_FIELD(__vwsn_precompile_12)
				CLASS_MEMBER_FIELD(__vwsn_precompile_13)
				CLASS_MEMBER_FIELD(__vwsn_precompile_14)
				CLASS_MEMBER_FIELD(__vwsn_precompile_15)
				CLASS_MEMBER_FIELD(__vwsn_precompile_16)
				CLASS_MEMBER_FIELD(__vwsn_precompile_17)
				CLASS_MEMBER_FIELD(__vwsn_precompile_18)
				CLASS_MEMBER_FIELD(__vwsn_precompile_2)
				CLASS_MEMBER_FIELD(__vwsn_precompile_3)
				CLASS_MEMBER_FIELD(__vwsn_precompile_4)
				CLASS_MEMBER_FIELD(__vwsn_precompile_5)
				CLASS_MEMBER_FIELD(__vwsn_precompile_6)
				CLASS_MEMBER_FIELD(__vwsn_precompile_7)
				CLASS_MEMBER_FIELD(__vwsn_precompile_8)
				CLASS_MEMBER_FIELD(__vwsn_precompile_9)
				CLASS_MEMBER_FIELD(accountController)
				CLASS_MEMBER_FIELD(self)
				CLASS_MEMBER_FIELD(videoContainer)
			END_CLASS_MEMBER(::demo::MainWindowConstructor)

			BEGIN_CLASS_MEMBER(::demo::VideoItemTemplate)
				CLASS_MEMBER_CONSTRUCTOR(::demo::VideoItemTemplate*(::vl::Ptr<::demo::VideoViewModel>), { L"__vwsn_ctor_parameter_ViewModel" })
				CLASS_MEMBER_METHOD(GetViewModel, NO_PARAMETER)
				CLASS_MEMBER_FIELD(__vwsn_parameter_ViewModel)
				CLASS_MEMBER_PROPERTY_READONLY(ViewModel, GetViewModel)
			END_CLASS_MEMBER(::demo::VideoItemTemplate)

			BEGIN_CLASS_MEMBER(::demo::VideoItemTemplateConstructor)
				CLASS_MEMBER_CONSTRUCTOR(::vl::Ptr<::demo::VideoItemTemplateConstructor>(), NO_PARAMETER)
				CLASS_MEMBER_METHOD(__vwsn_initialize_instance_, { L"__vwsn_this_" })
				CLASS_MEMBER_FIELD(__vwsn_precompile_0)
				CLASS_MEMBER_FIELD(__vwsn_precompile_1)
				CLASS_MEMBER_FIELD(__vwsn_precompile_2)
				CLASS_MEMBER_FIELD(__vwsn_precompile_3)
				CLASS_MEMBER_FIELD(__vwsn_precompile_4)
				CLASS_MEMBER_FIELD(__vwsn_precompile_5)
				CLASS_MEMBER_FIELD(__vwsn_precompile_6)
				CLASS_MEMBER_FIELD(__vwsn_precompile_7)
				CLASS_MEMBER_FIELD(__vwsn_precompile_8)
				CLASS_MEMBER_FIELD(ViewModel)
				CLASS_MEMBER_FIELD(self)
			END_CLASS_MEMBER(::demo::VideoItemTemplateConstructor)

			BEGIN_CLASS_MEMBER(::demo::VideoViewModel)
				CLASS_MEMBER_CONSTRUCTOR(::vl::Ptr<::demo::VideoViewModel>(), NO_PARAMETER)
				CLASS_MEMBER_METHOD(GetAuthor, NO_PARAMETER)
				CLASS_MEMBER_METHOD(GetFont, NO_PARAMETER)
				CLASS_MEMBER_METHOD(GetTitle, NO_PARAMETER)
				CLASS_MEMBER_METHOD(SetAuthor, { L"__vwsn_value_" })
				CLASS_MEMBER_METHOD(SetFont, { L"__vwsn_value_" })
				CLASS_MEMBER_METHOD(SetTitle, { L"__vwsn_value_" })
				CLASS_MEMBER_EVENT(AuthorChanged)
				CLASS_MEMBER_EVENT(FontChanged)
				CLASS_MEMBER_EVENT(TitleChanged)
				CLASS_MEMBER_FIELD(__vwsn_prop_Author)
				CLASS_MEMBER_FIELD(__vwsn_prop_Font)
				CLASS_MEMBER_FIELD(__vwsn_prop_Title)
				CLASS_MEMBER_PROPERTY_EVENT(Author, GetAuthor, SetAuthor, AuthorChanged)
				CLASS_MEMBER_PROPERTY_EVENT(Font, GetFont, SetFont, FontChanged)
				CLASS_MEMBER_PROPERTY_EVENT(Title, GetTitle, SetTitle, TitleChanged)
			END_CLASS_MEMBER(::demo::VideoViewModel)

#undef _
			class DemoTypeLoader : public Object, public ITypeLoader
			{
			public:
				void Load(ITypeManager* manager)
				{
					ADD_TYPE_INFO(::demo::AccountButtonTemplate)
					ADD_TYPE_INFO(::demo::AccountButtonTemplateConstructor)
					ADD_TYPE_INFO(::demo::AccountButtonViewModel)
					ADD_TYPE_INFO(::demo::AccountItemTemplate)
					ADD_TYPE_INFO(::demo::AccountItemTemplateConstructor)
					ADD_TYPE_INFO(::demo::AccountMenuItemTemplate)
					ADD_TYPE_INFO(::demo::AccountMenuItemTemplateConstructor)
					ADD_TYPE_INFO(::demo::MainWindow)
					ADD_TYPE_INFO(::demo::MainWindowConstructor)
					ADD_TYPE_INFO(::demo::VideoItemTemplate)
					ADD_TYPE_INFO(::demo::VideoItemTemplateConstructor)
					ADD_TYPE_INFO(::demo::VideoViewModel)
				}

				void Unload(ITypeManager* manager)
				{
				}
			};
#endif

			bool LoadDemoTypes()
			{
#ifndef VCZH_DEBUG_NO_REFLECTION
				if (auto manager = GetGlobalTypeManager())
				{
					return manager->AddTypeLoader(MakePtr<DemoTypeLoader>());
				}
#endif
				return false;
			}
		}
	}
}

#if defined( _MSC_VER)
#pragma warning(pop)
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#elif defined(__clang__)
#pragma clang diagnostic pop
#endif
