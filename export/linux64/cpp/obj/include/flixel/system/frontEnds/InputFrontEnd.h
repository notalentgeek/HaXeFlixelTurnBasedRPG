#ifndef INCLUDED_flixel_system_frontEnds_InputFrontEnd
#define INCLUDED_flixel_system_frontEnds_InputFrontEnd

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flixel,input,FlxKeyManager)
HX_DECLARE_CLASS2(flixel,input,FlxPointer)
HX_DECLARE_CLASS2(flixel,input,IFlxInputManager)
HX_DECLARE_CLASS3(flixel,input,keyboard,FlxKeyboard)
HX_DECLARE_CLASS3(flixel,input,mouse,FlxMouse)
HX_DECLARE_CLASS3(flixel,_system,frontEnds,InputFrontEnd)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
namespace flixel{
namespace _system{
namespace frontEnds{


class HXCPP_CLASS_ATTRIBUTES  InputFrontEnd_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef InputFrontEnd_obj OBJ_;
		InputFrontEnd_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="flixel.system.frontEnds.InputFrontEnd")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< InputFrontEnd_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~InputFrontEnd_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("InputFrontEnd","\xbc","\x9c","\xcc","\x29"); }

		virtual ::flixel::input::mouse::FlxMouse replace_flixel_input_mouse_FlxMouse( ::flixel::input::mouse::FlxMouse Old,::flixel::input::mouse::FlxMouse New);
		Dynamic replace_flixel_input_mouse_FlxMouse_dyn();

		virtual ::flixel::input::mouse::FlxMouse add_flixel_input_mouse_FlxMouse( ::flixel::input::mouse::FlxMouse Input);
		Dynamic add_flixel_input_mouse_FlxMouse_dyn();

		virtual ::flixel::input::keyboard::FlxKeyboard add_flixel_input_keyboard_FlxKeyboard( ::flixel::input::keyboard::FlxKeyboard Input);
		Dynamic add_flixel_input_keyboard_FlxKeyboard_dyn();

		Array< ::flixel::input::IFlxInputManager > list;
		bool resetOnStateSwitch;
		virtual Void reset( );
		Dynamic reset_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void onFocus( );
		Dynamic onFocus_dyn();

		virtual Void onFocusLost( );
		Dynamic onFocusLost_dyn();

		virtual Void onStateSwitch( );
		Dynamic onStateSwitch_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds

#endif /* INCLUDED_flixel_system_frontEnds_InputFrontEnd */ 
