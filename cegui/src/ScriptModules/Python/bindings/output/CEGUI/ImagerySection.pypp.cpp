// This file has been generated by Py++.

#include "boost/python.hpp"
#include "generators/include/python_CEGUI.h"
#include "ImagerySection.pypp.hpp"

namespace bp = boost::python;

struct ImagerySection_wrapper : CEGUI::ImagerySection, bp::wrapper< CEGUI::ImagerySection > {

    ImagerySection_wrapper(CEGUI::ImagerySection const & arg )
    : CEGUI::ImagerySection( arg )
      , bp::wrapper< CEGUI::ImagerySection >(){
        // copy constructor
        
    }

    ImagerySection_wrapper( )
    : CEGUI::ImagerySection( )
      , bp::wrapper< CEGUI::ImagerySection >(){
        // null constructor
    
    }

    ImagerySection_wrapper(::CEGUI::String const & name )
    : CEGUI::ImagerySection( boost::ref(name) )
      , bp::wrapper< CEGUI::ImagerySection >(){
        // constructor
    
    }

    void initMasterColourRect( ::CEGUI::Window const & wnd, ::CEGUI::ColourRect & cr ) const {
        CEGUI::ImagerySection::initMasterColourRect( boost::ref(wnd), boost::ref(cr) );
    }

};

void register_ImagerySection_class(){

    { //::CEGUI::ImagerySection
        typedef bp::class_< ImagerySection_wrapper > ImagerySection_exposer_t;
        ImagerySection_exposer_t ImagerySection_exposer = ImagerySection_exposer_t( "ImagerySection", bp::init< >("*!\n\
        \n\
                \n\
                    Constructor.\n\
                *\n") );
        bp::scope ImagerySection_scope( ImagerySection_exposer );
        ImagerySection_exposer.def( bp::init< CEGUI::String const & >(( bp::arg("name") ), "*!\n\
                \n\
                    ImagerySection constructor.  Name must be supplied, masterColours are set to 0xFFFFFFFF\
                    by default.\n\
        \n\
                @param name\n\
                    Name of the new ImagerySection.\n\
                *\n") );
        bp::implicitly_convertible< CEGUI::String const &, CEGUI::ImagerySection >();
        { //::CEGUI::ImagerySection::addFrameComponent
        
            typedef void ( ::CEGUI::ImagerySection::*addFrameComponent_function_type )( ::CEGUI::FrameComponent const & ) ;
            
            ImagerySection_exposer.def( 
                "addFrameComponent"
                , addFrameComponent_function_type( &::CEGUI::ImagerySection::addFrameComponent )
                , ( bp::arg("frameComponent") )
                , "*!\n\
                    \n\
                        Add a FrameComponent to this ImagerySection.\n\
            \n\
                    @param frame\n\
                        FrameComponent to be added to the section (a copy is made)\n\
                    *\n" );
        
        }
        { //::CEGUI::ImagerySection::addImageryComponent
        
            typedef void ( ::CEGUI::ImagerySection::*addImageryComponent_function_type )( ::CEGUI::ImageryComponent const & ) ;
            
            ImagerySection_exposer.def( 
                "addImageryComponent"
                , addImageryComponent_function_type( &::CEGUI::ImagerySection::addImageryComponent )
                , ( bp::arg("imageryComponent") )
                , "*!\n\
                    \n\
                        Add an ImageryComponent to this ImagerySection.\n\
            \n\
                    @param imageryComponent\n\
                        ImageryComponent to be added to the section (a copy is made)\n\
                    *\n" );
        
        }
        { //::CEGUI::ImagerySection::addTextComponent
        
            typedef void ( ::CEGUI::ImagerySection::*addTextComponent_function_type )( ::CEGUI::TextComponent const & ) ;
            
            ImagerySection_exposer.def( 
                "addTextComponent"
                , addTextComponent_function_type( &::CEGUI::ImagerySection::addTextComponent )
                , ( bp::arg("textComponent") )
                , "*!\n\
                    \n\
                        Add a TextComponent to this ImagerySection.\n\
            \n\
                    @param textComponent\n\
                        TextComponent to be added to the section (a copy is made)\n\
                    *\n" );
        
        }
        { //::CEGUI::ImagerySection::clearFrameComponents
        
            typedef void ( ::CEGUI::ImagerySection::*clearFrameComponents_function_type )(  ) ;
            
            ImagerySection_exposer.def( 
                "clearFrameComponents"
                , clearFrameComponents_function_type( &::CEGUI::ImagerySection::clearFrameComponents )
                , "*!\n\
                    \n\
                        Clear all FrameComponents from this ImagerySection.\n\
            \n\
                    @return\n\
                        Nothing\n\
                    *\n" );
        
        }
        { //::CEGUI::ImagerySection::clearImageryComponents
        
            typedef void ( ::CEGUI::ImagerySection::*clearImageryComponents_function_type )(  ) ;
            
            ImagerySection_exposer.def( 
                "clearImageryComponents"
                , clearImageryComponents_function_type( &::CEGUI::ImagerySection::clearImageryComponents )
                , "*!\n\
                    \n\
                        Clear all ImageryComponents from this ImagerySection.\n\
            \n\
                    @return\n\
                        Nothing\n\
                    *\n" );
        
        }
        { //::CEGUI::ImagerySection::clearTextComponents
        
            typedef void ( ::CEGUI::ImagerySection::*clearTextComponents_function_type )(  ) ;
            
            ImagerySection_exposer.def( 
                "clearTextComponents"
                , clearTextComponents_function_type( &::CEGUI::ImagerySection::clearTextComponents )
                , "*!\n\
                    \n\
                        Clear all TextComponents from this ImagerySection.\n\
            \n\
                    @return\n\
                        Nothing\n\
                    *\n" );
        
        }
        { //::CEGUI::ImagerySection::getBoundingRect
        
            typedef ::CEGUI::Rectf ( ::CEGUI::ImagerySection::*getBoundingRect_function_type )( ::CEGUI::Window const & ) const;
            
            ImagerySection_exposer.def( 
                "getBoundingRect"
                , getBoundingRect_function_type( &::CEGUI::ImagerySection::getBoundingRect )
                , ( bp::arg("wnd") )
                , "*!\n\
            \n\
                Return smallest Rect that could contain all imagery within this section.\n\
            *\n" );
        
        }
        { //::CEGUI::ImagerySection::getBoundingRect
        
            typedef ::CEGUI::Rectf ( ::CEGUI::ImagerySection::*getBoundingRect_function_type )( ::CEGUI::Window const &,::CEGUI::Rectf const & ) const;
            
            ImagerySection_exposer.def( 
                "getBoundingRect"
                , getBoundingRect_function_type( &::CEGUI::ImagerySection::getBoundingRect )
                , ( bp::arg("wnd"), bp::arg("rect") )
                , "*!\n\
            \n\
                Return smallest Rect that could contain all imagery within this section.\n\
            *\n" );
        
        }
        { //::CEGUI::ImagerySection::getFrameComponentIterator
        
            typedef ::CEGUI::ConstVectorIterator< std::vector< CEGUI::FrameComponent > > ( ::CEGUI::ImagerySection::*getFrameComponentIterator_function_type )(  ) const;
            
            ImagerySection_exposer.def( 
                "getFrameComponentIterator"
                , getFrameComponentIterator_function_type( &::CEGUI::ImagerySection::getFrameComponentIterator )
                , "*!\n\
                    \n\
                        Return a ImagerySection.TextComponentIterator object to iterate\n\
                        over the TextComponent elements currently added to the\n\
                        ImagerySection.\n\
            \n\
                     deprecated\n\
                        This iterator is deprecated because it will be replaced by the function\
                        getTextComponents\n\
                        in the next version.\n\
                    *\n\
                    *!\n\
                    \n\
                        Return a ImagerySection.FrameComponentIterator object to iterate\n\
                        over the FrameComponent elements currently added to the\n\
                        ImagerySection.\n\
            \n\
                     deprecated\n\
                        This iterator is deprecated because it will be replaced by the function\
                        getFrameComponents\n\
                        in the next version.\n\
                    *\n" );
        
        }
        { //::CEGUI::ImagerySection::getFrameComponentPointers
        
            typedef ::std::vector< CEGUI::FrameComponent* > ( ::CEGUI::ImagerySection::*getFrameComponentPointers_function_type )(  ) ;
            
            ImagerySection_exposer.def( 
                "getFrameComponentPointers"
                , getFrameComponentPointers_function_type( &::CEGUI::ImagerySection::getFrameComponentPointers )
                , "*!\n\
                    \n\
                        Returns a vector of pointers to the FrameComponents that are currently added to this\
                        ImagerySection. If a\n\
                        FrameComponent is added or removed from this ImagerySection, then the pointers in this\
                        vector are not valid\n\
                        anymore. The function should then be called again to retrieve valid pointers.\n\
            \n\
                     @return\n\
                        A vector of pointers to the FrameComponents that are currently added to this\
                        ImagerySection\n\
                    *\n" );
        
        }
        { //::CEGUI::ImagerySection::getImageryComponentIterator
        
            typedef ::CEGUI::ConstVectorIterator< std::vector< CEGUI::ImageryComponent > > ( ::CEGUI::ImagerySection::*getImageryComponentIterator_function_type )(  ) const;
            
            ImagerySection_exposer.def( 
                "getImageryComponentIterator"
                , getImageryComponentIterator_function_type( &::CEGUI::ImagerySection::getImageryComponentIterator )
                , "*!\n\
                    \n\
                        Return a ImagerySection.ImageryComponentIterator object to iterate\n\
                        over the ImageryComponent elements currently added to the\n\
                        ImagerySection.\n\
            \n\
                     deprecated\n\
                        This iterator is deprecated because it will be replaced by the function\
                        getImageryComponents\n\
                        in the next version.\n\
                    *\n" );
        
        }
        { //::CEGUI::ImagerySection::getImageryComponentPointers
        
            typedef ::std::vector< CEGUI::ImageryComponent* > ( ::CEGUI::ImagerySection::*getImageryComponentPointers_function_type )(  ) ;
            
            ImagerySection_exposer.def( 
                "getImageryComponentPointers"
                , getImageryComponentPointers_function_type( &::CEGUI::ImagerySection::getImageryComponentPointers )
                , "*!\n\
                    \n\
                        Returns a vector of pointers to the ImageryComponents that are currently added to this\
                        ImagerySection. If an\n\
                        ImageryComponent is added or removed from this ImagerySection, then the pointers in this\
                        vector are not valid\n\
                        anymore. The function should then be called again to retrieve valid pointers.\n\
            \n\
                     @return\n\
                        A vector of pointers to the ImageryComponents that are currently added to this\
                        ImagerySection\n\
                    *\n" );
        
        }
        { //::CEGUI::ImagerySection::getMasterColours
        
            typedef ::CEGUI::ColourRect const & ( ::CEGUI::ImagerySection::*getMasterColours_function_type )(  ) const;
            
            ImagerySection_exposer.def( 
                "getMasterColours"
                , getMasterColours_function_type( &::CEGUI::ImagerySection::getMasterColours )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "*!\n\
                    \n\
                        Return the current master colours set for this ImagerySection.\n\
            \n\
                    @return\n\
                        ColourRect describing the master colour values in use for this ImagerySection.\n\
                    *\n" );
        
        }
        { //::CEGUI::ImagerySection::getMasterColoursPropertySource
        
            typedef ::CEGUI::String const & ( ::CEGUI::ImagerySection::*getMasterColoursPropertySource_function_type )(  ) const;
            
            ImagerySection_exposer.def( 
                "getMasterColoursPropertySource"
                , getMasterColoursPropertySource_function_type( &::CEGUI::ImagerySection::getMasterColoursPropertySource )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "*!\n\
                    \n\
                        Get the name of the property where master colour values can be obtained.\n\
            \n\
                    @return\n\
                        String containing the name of the property.\n\
                    *\n" );
        
        }
        { //::CEGUI::ImagerySection::getName
        
            typedef ::CEGUI::String const & ( ::CEGUI::ImagerySection::*getName_function_type )(  ) const;
            
            ImagerySection_exposer.def( 
                "getName"
                , getName_function_type( &::CEGUI::ImagerySection::getName )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "*!\n\
                    \n\
                        Return the name of this ImagerySection.\n\
            \n\
                    @return\n\
                        String object holding the name of the ImagerySection.\n\
                    *\n" );
        
        }
        { //::CEGUI::ImagerySection::getTextComponentIterator
        
            typedef ::CEGUI::ConstVectorIterator< std::vector< CEGUI::TextComponent > > ( ::CEGUI::ImagerySection::*getTextComponentIterator_function_type )(  ) const;
            
            ImagerySection_exposer.def( 
                "getTextComponentIterator"
                , getTextComponentIterator_function_type( &::CEGUI::ImagerySection::getTextComponentIterator )
                , "*!\n\
                    \n\
                        Return a ImagerySection.ImageryComponentIterator object to iterate\n\
                        over the ImageryComponent elements currently added to the\n\
                        ImagerySection.\n\
            \n\
                     deprecated\n\
                        This iterator is deprecated because it will be replaced by the function\
                        getImageryComponents\n\
                        in the next version.\n\
                    *\n\
                    *!\n\
                    \n\
                        Return a ImagerySection.TextComponentIterator object to iterate\n\
                        over the TextComponent elements currently added to the\n\
                        ImagerySection.\n\
            \n\
                     deprecated\n\
                        This iterator is deprecated because it will be replaced by the function\
                        getTextComponents\n\
                        in the next version.\n\
                    *\n" );
        
        }
        { //::CEGUI::ImagerySection::getTextComponentPointers
        
            typedef ::std::vector< CEGUI::TextComponent* > ( ::CEGUI::ImagerySection::*getTextComponentPointers_function_type )(  ) ;
            
            ImagerySection_exposer.def( 
                "getTextComponentPointers"
                , getTextComponentPointers_function_type( &::CEGUI::ImagerySection::getTextComponentPointers )
                , "*!\n\
                    \n\
                        Returns a vector of pointers to the TextComponents that are currently added to this\
                        ImagerySection. If a\n\
                        TextComponent is added or removed from this ImagerySection, then the pointers in this\
                        vector are not valid\n\
                        anymore. The function should then be called again to retrieve valid pointers.\n\
            \n\
                     @return\n\
                        A vector of pointers to the TextComponents that are currently added to this\
                        ImagerySection\n\
                    *\n" );
        
        }
        { //::CEGUI::ImagerySection::handleFontRenderSizeChange
        
            typedef bool ( ::CEGUI::ImagerySection::*handleFontRenderSizeChange_function_type )( ::CEGUI::Window &,::CEGUI::Font const * ) const;
            
            ImagerySection_exposer.def( 
                "handleFontRenderSizeChange"
                , handleFontRenderSizeChange_function_type( &::CEGUI::ImagerySection::handleFontRenderSizeChange )
                , ( bp::arg("window"), bp::arg("font") )
                , "! perform any processing required due to the given font having changed.\n" );
        
        }
        { //::CEGUI::ImagerySection::initMasterColourRect
        
            typedef void ( ImagerySection_wrapper::*initMasterColourRect_function_type )( ::CEGUI::Window const &,::CEGUI::ColourRect & ) const;
            
            ImagerySection_exposer.def( 
                "initMasterColourRect"
                , initMasterColourRect_function_type( &ImagerySection_wrapper::initMasterColourRect )
                , ( bp::arg("wnd"), bp::arg("cr") )
                , "*!\n\
                    \n\
                        Helper method to initialise a ColourRect with appropriate values according to the way\
                        the\n\
                        ImagerySection is set up.\n\
            \n\
                        This will try and get values from multiple places:\n\
                            - a property attached to  wnd\n\
                            - or the integral d_masterColours value.\n\
                    *\n" );
        
        }
        { //::CEGUI::ImagerySection::removeFrameComponent
        
            typedef void ( ::CEGUI::ImagerySection::*removeFrameComponent_function_type )( ::CEGUI::FrameComponent const & ) ;
            
            ImagerySection_exposer.def( 
                "removeFrameComponent"
                , removeFrameComponent_function_type( &::CEGUI::ImagerySection::removeFrameComponent )
                , ( bp::arg("frameComponent") )
                , "*!\n\
                    \n\
                        Removes an FrameComponent from this ImagerySection. The supplied FrameComponent\
                        reference should be\n\
                        retrieved via the getFrameComponentPointers function. The check to find out which\
                        FrameComponent to remove\n\
                        is done using memory address comparison (identity check).\n\
            \n\
                    @param frameComponent\n\
                        A reference to the FrameComponent to be removed to the section\n\
                    *\n" );
        
        }
        { //::CEGUI::ImagerySection::removeImageryComponent
        
            typedef void ( ::CEGUI::ImagerySection::*removeImageryComponent_function_type )( ::CEGUI::ImageryComponent const & ) ;
            
            ImagerySection_exposer.def( 
                "removeImageryComponent"
                , removeImageryComponent_function_type( &::CEGUI::ImagerySection::removeImageryComponent )
                , ( bp::arg("imageryComponent") )
                , "*!\n\
                    \n\
                        Removes an ImageryComponent from this ImagerySection. The supplied ImagerySection\
                        reference should be\n\
                        retrieved via the getImageryComponentPointers function. The check to find out which\
                        ImagerySection to remove\n\
                        is done using memory address comparison (identity check).\n\
            \n\
                    @param imageryComponent\n\
                        A reference to the ImageryComponent to be removed to the section\n\
                    *\n" );
        
        }
        { //::CEGUI::ImagerySection::removeTextComponent
        
            typedef void ( ::CEGUI::ImagerySection::*removeTextComponent_function_type )( ::CEGUI::TextComponent const & ) ;
            
            ImagerySection_exposer.def( 
                "removeTextComponent"
                , removeTextComponent_function_type( &::CEGUI::ImagerySection::removeTextComponent )
                , ( bp::arg("textComponent") )
                , "*!\n\
                    \n\
                        Removes an TextComponent from this ImagerySection. The supplied TextComponent reference\
                        should be\n\
                        retrieved via the getTextComponentPointers function. The check to find out which\
                        TextComponent to remove\n\
                        is done using memory address comparison (identity check).\n\
            \n\
                    @param textComponent\n\
                        A reference to the TextComponent to be removed to the section\n\
                    *\n" );
        
        }
        { //::CEGUI::ImagerySection::render
        
            typedef void ( ::CEGUI::ImagerySection::*render_function_type )( ::CEGUI::Window &,::CEGUI::ColourRect const *,::CEGUI::Rectf const *,bool ) const;
            
            ImagerySection_exposer.def( 
                "render"
                , render_function_type( &::CEGUI::ImagerySection::render )
                , ( bp::arg("srcWindow"), bp::arg("modColours")=bp::object(), bp::arg("clipper")=bp::object(), bp::arg("clipToDisplay")=(bool)(false) )
                , "*!\n\
                    \n\
                        Render the ImagerySection.\n\
            \n\
                    @param srcWindow\n\
                        Window object to be used when calculating pixel values from BaseDim values.\n\
            \n\
                    @param modColours\n\
                        ColourRect specifying colours to be modulated with the ImagerySection's master colours.\
                        May be 0.\n\
            \n\
                    @return\n\
                        Nothing.\n\
                    *\n" );
        
        }
        { //::CEGUI::ImagerySection::render
        
            typedef void ( ::CEGUI::ImagerySection::*render_function_type )( ::CEGUI::Window &,::CEGUI::Rectf const &,::CEGUI::ColourRect const *,::CEGUI::Rectf const *,bool ) const;
            
            ImagerySection_exposer.def( 
                "render"
                , render_function_type( &::CEGUI::ImagerySection::render )
                , ( bp::arg("srcWindow"), bp::arg("baseRect"), bp::arg("modColours")=bp::object(), bp::arg("clipper")=bp::object(), bp::arg("clipToDisplay")=(bool)(false) )
                , "*!\n\
                    \n\
                        Render the ImagerySection.\n\
            \n\
                    @param srcWindow\n\
                        Window object to be used when calculating pixel values from BaseDim values.\n\
            \n\
                    @param baseRect\n\
                        Rect object to be used when calculating pixel values from BaseDim values.\n\
            \n\
                    @param modColours\n\
                        ColourRect specifying colours to be modulated with the ImagerySection's master colours.\
                        May be 0.\n\
            \n\
                    @return\n\
                        Nothing.\n\
                    *\n" );
        
        }
        { //::CEGUI::ImagerySection::setMasterColours
        
            typedef void ( ::CEGUI::ImagerySection::*setMasterColours_function_type )( ::CEGUI::ColourRect const & ) ;
            
            ImagerySection_exposer.def( 
                "setMasterColours"
                , setMasterColours_function_type( &::CEGUI::ImagerySection::setMasterColours )
                , ( bp::arg("cols") )
                , "*!\n\
                    \n\
                        Set the master colours to be used for this ImagerySection.\n\
            \n\
                    @param cols\n\
                        ColourRect describing the colours to be set as the master colours for this\
                        ImagerySection.\n\
            \n\
                    @return\n\
                        Nothing.\n\
                    *\n" );
        
        }
        { //::CEGUI::ImagerySection::setMasterColoursPropertySource
        
            typedef void ( ::CEGUI::ImagerySection::*setMasterColoursPropertySource_function_type )( ::CEGUI::String const & ) ;
            
            ImagerySection_exposer.def( 
                "setMasterColoursPropertySource"
                , setMasterColoursPropertySource_function_type( &::CEGUI::ImagerySection::setMasterColoursPropertySource )
                , ( bp::arg("property") )
                , "*!\n\
                    \n\
                        Set the name of the property where master colour values can be obtained.\n\
            \n\
                    @param property\n\
                        String containing the name of the property.\n\
            \n\
                    @return\n\
                        Nothing.\n\
                    *\n" );
        
        }
        { //::CEGUI::ImagerySection::setName
        
            typedef void ( ::CEGUI::ImagerySection::*setName_function_type )( ::CEGUI::String const & ) ;
            
            ImagerySection_exposer.def( 
                "setName"
                , setName_function_type( &::CEGUI::ImagerySection::setName )
                , ( bp::arg("name") )
                , "*!\n\
                    \n\
                        Sets the name of this ImagerySection.\n\
            \n\
                    @param name\n\
                        String object holding the name of the ImagerySection.\n\
            \n\
                    @return\n\
                        Nothing.\n\
                    *\n" );
        
        }
        { //::CEGUI::ImagerySection::writeXMLToStream
        
            typedef void ( ::CEGUI::ImagerySection::*writeXMLToStream_function_type )( ::CEGUI::XMLSerializer & ) const;
            
            ImagerySection_exposer.def( 
                "writeXMLToStream"
                , writeXMLToStream_function_type( &::CEGUI::ImagerySection::writeXMLToStream )
                , ( bp::arg("xml_stream") )
                , "*!\n\
                    \n\
                        Writes an xml representation of this ImagerySection to  out_stream.\n\
            \n\
                    @param xml_stream\n\
                        Stream where xml data should be output.\n\
            \n\
            \n\
                    @return\n\
                        Nothing.\n\
                    *\n" );
        
        }
    }

}
