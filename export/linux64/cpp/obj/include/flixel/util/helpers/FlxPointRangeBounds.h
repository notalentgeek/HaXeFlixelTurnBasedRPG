#ifndef INCLUDED_flixel_util_helpers_FlxPointRangeBounds
#define INCLUDED_flixel_util_helpers_FlxPointRangeBounds

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS3(flixel,util,helpers,FlxBounds)
HX_DECLARE_CLASS3(flixel,util,helpers,FlxPointRangeBounds)
namespace flixel{
namespace util{
namespace helpers{


class HXCPP_CLASS_ATTRIBUTES  FlxPointRangeBounds_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxPointRangeBounds_obj OBJ_;
		FlxPointRangeBounds_obj();
		Void __construct(Float startMinX,Dynamic startMinY,Dynamic startMaxX,Dynamic startMaxY,Dynamic endMinX,Dynamic endMinY,Dynamic endMaxX,Dynamic endMaxY);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.util.helpers.FlxPointRangeBounds")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxPointRangeBounds_obj > __new(Float startMinX,Dynamic startMinY,Dynamic startMaxX,Dynamic startMaxY,Dynamic endMinX,Dynamic endMinY,Dynamic endMaxX,Dynamic endMaxY);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxPointRangeBounds_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::flixel::util::IFlxDestroyable_obj *();
		::String __ToString() const { return HX_HCSTRING("FlxPointRangeBounds","\x14","\x4e","\xdf","\xc7"); }

		::flixel::util::helpers::FlxBounds start;
		::flixel::util::helpers::FlxBounds end;
		bool active;
		virtual ::flixel::util::helpers::FlxPointRangeBounds set( Float startMinX,Dynamic startMinY,Dynamic startMaxX,Dynamic startMaxY,Dynamic endMinX,Dynamic endMinY,Dynamic endMaxX,Dynamic endMaxY);
		Dynamic set_dyn();

		virtual bool equals( ::flixel::util::helpers::FlxPointRangeBounds OtherFlxPointRangeBounds);
		Dynamic equals_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

};

} // end namespace flixel
} // end namespace util
} // end namespace helpers

#endif /* INCLUDED_flixel_util_helpers_FlxPointRangeBounds */ 
