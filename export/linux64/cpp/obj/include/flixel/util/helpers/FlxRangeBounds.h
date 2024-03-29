#ifndef INCLUDED_flixel_util_helpers_FlxRangeBounds
#define INCLUDED_flixel_util_helpers_FlxRangeBounds

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,util,helpers,FlxBounds)
HX_DECLARE_CLASS3(flixel,util,helpers,FlxRangeBounds)
namespace flixel{
namespace util{
namespace helpers{


class HXCPP_CLASS_ATTRIBUTES  FlxRangeBounds_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxRangeBounds_obj OBJ_;
		FlxRangeBounds_obj();
		Void __construct(Dynamic startMin,Dynamic startMax,Dynamic endMin,Dynamic endMax);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.util.helpers.FlxRangeBounds")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FlxRangeBounds_obj > __new(Dynamic startMin,Dynamic startMax,Dynamic endMin,Dynamic endMax);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxRangeBounds_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("FlxRangeBounds","\xe0","\xc4","\x7b","\x47"); }

		::flixel::util::helpers::FlxBounds start;
		::flixel::util::helpers::FlxBounds end;
		bool active;
		virtual ::flixel::util::helpers::FlxRangeBounds set( Dynamic startMin,Dynamic startMax,Dynamic endMin,Dynamic endMax);
		Dynamic set_dyn();

		virtual bool equals( ::flixel::util::helpers::FlxRangeBounds OtherRangeBounds);
		Dynamic equals_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

};

} // end namespace flixel
} // end namespace util
} // end namespace helpers

#endif /* INCLUDED_flixel_util_helpers_FlxRangeBounds */ 
