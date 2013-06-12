/* valaunresolvedsymbol.c generated by valac, the Vala compiler
 * generated from valaunresolvedsymbol.vala, do not modify */

/* valaunresolvedsymbol.vala
 *
 * Copyright (C) 2008-2009  Jürg Billeter
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.

 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.

 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301  USA
 *
 * Author:
 * 	Jürg Billeter <j@bitron.ch>
 */

#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <valagee.h>


#define VALA_TYPE_CODE_NODE (vala_code_node_get_type ())
#define VALA_CODE_NODE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CODE_NODE, ValaCodeNode))
#define VALA_CODE_NODE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CODE_NODE, ValaCodeNodeClass))
#define VALA_IS_CODE_NODE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CODE_NODE))
#define VALA_IS_CODE_NODE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CODE_NODE))
#define VALA_CODE_NODE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CODE_NODE, ValaCodeNodeClass))

typedef struct _ValaCodeNode ValaCodeNode;
typedef struct _ValaCodeNodeClass ValaCodeNodeClass;
typedef struct _ValaCodeNodePrivate ValaCodeNodePrivate;

#define VALA_TYPE_CODE_VISITOR (vala_code_visitor_get_type ())
#define VALA_CODE_VISITOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CODE_VISITOR, ValaCodeVisitor))
#define VALA_CODE_VISITOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CODE_VISITOR, ValaCodeVisitorClass))
#define VALA_IS_CODE_VISITOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CODE_VISITOR))
#define VALA_IS_CODE_VISITOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CODE_VISITOR))
#define VALA_CODE_VISITOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CODE_VISITOR, ValaCodeVisitorClass))

typedef struct _ValaCodeVisitor ValaCodeVisitor;
typedef struct _ValaCodeVisitorClass ValaCodeVisitorClass;

#define VALA_TYPE_CODE_CONTEXT (vala_code_context_get_type ())
#define VALA_CODE_CONTEXT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CODE_CONTEXT, ValaCodeContext))
#define VALA_CODE_CONTEXT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CODE_CONTEXT, ValaCodeContextClass))
#define VALA_IS_CODE_CONTEXT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CODE_CONTEXT))
#define VALA_IS_CODE_CONTEXT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CODE_CONTEXT))
#define VALA_CODE_CONTEXT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CODE_CONTEXT, ValaCodeContextClass))

typedef struct _ValaCodeContext ValaCodeContext;
typedef struct _ValaCodeContextClass ValaCodeContextClass;

#define VALA_TYPE_CODE_GENERATOR (vala_code_generator_get_type ())
#define VALA_CODE_GENERATOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CODE_GENERATOR, ValaCodeGenerator))
#define VALA_CODE_GENERATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CODE_GENERATOR, ValaCodeGeneratorClass))
#define VALA_IS_CODE_GENERATOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CODE_GENERATOR))
#define VALA_IS_CODE_GENERATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CODE_GENERATOR))
#define VALA_CODE_GENERATOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CODE_GENERATOR, ValaCodeGeneratorClass))

typedef struct _ValaCodeGenerator ValaCodeGenerator;
typedef struct _ValaCodeGeneratorClass ValaCodeGeneratorClass;

#define VALA_TYPE_DATA_TYPE (vala_data_type_get_type ())
#define VALA_DATA_TYPE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_DATA_TYPE, ValaDataType))
#define VALA_DATA_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_DATA_TYPE, ValaDataTypeClass))
#define VALA_IS_DATA_TYPE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_DATA_TYPE))
#define VALA_IS_DATA_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_DATA_TYPE))
#define VALA_DATA_TYPE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_DATA_TYPE, ValaDataTypeClass))

typedef struct _ValaDataType ValaDataType;
typedef struct _ValaDataTypeClass ValaDataTypeClass;

#define VALA_TYPE_EXPRESSION (vala_expression_get_type ())
#define VALA_EXPRESSION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_EXPRESSION, ValaExpression))
#define VALA_EXPRESSION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_EXPRESSION, ValaExpressionClass))
#define VALA_IS_EXPRESSION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_EXPRESSION))
#define VALA_IS_EXPRESSION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_EXPRESSION))
#define VALA_EXPRESSION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_EXPRESSION, ValaExpressionClass))

typedef struct _ValaExpression ValaExpression;
typedef struct _ValaExpressionClass ValaExpressionClass;

#define VALA_TYPE_SYMBOL (vala_symbol_get_type ())
#define VALA_SYMBOL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_SYMBOL, ValaSymbol))
#define VALA_SYMBOL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_SYMBOL, ValaSymbolClass))
#define VALA_IS_SYMBOL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_SYMBOL))
#define VALA_IS_SYMBOL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_SYMBOL))
#define VALA_SYMBOL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_SYMBOL, ValaSymbolClass))

typedef struct _ValaSymbol ValaSymbol;
typedef struct _ValaSymbolClass ValaSymbolClass;

#define VALA_TYPE_VARIABLE (vala_variable_get_type ())
#define VALA_VARIABLE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_VARIABLE, ValaVariable))
#define VALA_VARIABLE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_VARIABLE, ValaVariableClass))
#define VALA_IS_VARIABLE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_VARIABLE))
#define VALA_IS_VARIABLE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_VARIABLE))
#define VALA_VARIABLE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_VARIABLE, ValaVariableClass))

typedef struct _ValaVariable ValaVariable;
typedef struct _ValaVariableClass ValaVariableClass;

#define VALA_TYPE_ATTRIBUTE (vala_attribute_get_type ())
#define VALA_ATTRIBUTE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_ATTRIBUTE, ValaAttribute))
#define VALA_ATTRIBUTE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_ATTRIBUTE, ValaAttributeClass))
#define VALA_IS_ATTRIBUTE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_ATTRIBUTE))
#define VALA_IS_ATTRIBUTE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_ATTRIBUTE))
#define VALA_ATTRIBUTE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_ATTRIBUTE, ValaAttributeClass))

typedef struct _ValaAttribute ValaAttribute;
typedef struct _ValaAttributeClass ValaAttributeClass;
typedef struct _ValaSymbolPrivate ValaSymbolPrivate;

#define VALA_TYPE_NAMESPACE (vala_namespace_get_type ())
#define VALA_NAMESPACE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_NAMESPACE, ValaNamespace))
#define VALA_NAMESPACE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_NAMESPACE, ValaNamespaceClass))
#define VALA_IS_NAMESPACE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_NAMESPACE))
#define VALA_IS_NAMESPACE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_NAMESPACE))
#define VALA_NAMESPACE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_NAMESPACE, ValaNamespaceClass))

typedef struct _ValaNamespace ValaNamespace;
typedef struct _ValaNamespaceClass ValaNamespaceClass;

#define VALA_TYPE_TYPESYMBOL (vala_typesymbol_get_type ())
#define VALA_TYPESYMBOL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_TYPESYMBOL, ValaTypeSymbol))
#define VALA_TYPESYMBOL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_TYPESYMBOL, ValaTypeSymbolClass))
#define VALA_IS_TYPESYMBOL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_TYPESYMBOL))
#define VALA_IS_TYPESYMBOL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_TYPESYMBOL))
#define VALA_TYPESYMBOL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_TYPESYMBOL, ValaTypeSymbolClass))

typedef struct _ValaTypeSymbol ValaTypeSymbol;
typedef struct _ValaTypeSymbolClass ValaTypeSymbolClass;

#define VALA_TYPE_OBJECT_TYPE_SYMBOL (vala_object_type_symbol_get_type ())
#define VALA_OBJECT_TYPE_SYMBOL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_OBJECT_TYPE_SYMBOL, ValaObjectTypeSymbol))
#define VALA_OBJECT_TYPE_SYMBOL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_OBJECT_TYPE_SYMBOL, ValaObjectTypeSymbolClass))
#define VALA_IS_OBJECT_TYPE_SYMBOL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_OBJECT_TYPE_SYMBOL))
#define VALA_IS_OBJECT_TYPE_SYMBOL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_OBJECT_TYPE_SYMBOL))
#define VALA_OBJECT_TYPE_SYMBOL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_OBJECT_TYPE_SYMBOL, ValaObjectTypeSymbolClass))

typedef struct _ValaObjectTypeSymbol ValaObjectTypeSymbol;
typedef struct _ValaObjectTypeSymbolClass ValaObjectTypeSymbolClass;

#define VALA_TYPE_CLASS (vala_class_get_type ())
#define VALA_CLASS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CLASS, ValaClass))
#define VALA_CLASS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CLASS, ValaClassClass))
#define VALA_IS_CLASS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CLASS))
#define VALA_IS_CLASS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CLASS))
#define VALA_CLASS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CLASS, ValaClassClass))

typedef struct _ValaClass ValaClass;
typedef struct _ValaClassClass ValaClassClass;

#define VALA_TYPE_INTERFACE (vala_interface_get_type ())
#define VALA_INTERFACE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_INTERFACE, ValaInterface))
#define VALA_INTERFACE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_INTERFACE, ValaInterfaceClass))
#define VALA_IS_INTERFACE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_INTERFACE))
#define VALA_IS_INTERFACE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_INTERFACE))
#define VALA_INTERFACE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_INTERFACE, ValaInterfaceClass))

typedef struct _ValaInterface ValaInterface;
typedef struct _ValaInterfaceClass ValaInterfaceClass;

#define VALA_TYPE_STRUCT (vala_struct_get_type ())
#define VALA_STRUCT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_STRUCT, ValaStruct))
#define VALA_STRUCT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_STRUCT, ValaStructClass))
#define VALA_IS_STRUCT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_STRUCT))
#define VALA_IS_STRUCT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_STRUCT))
#define VALA_STRUCT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_STRUCT, ValaStructClass))

typedef struct _ValaStruct ValaStruct;
typedef struct _ValaStructClass ValaStructClass;

#define VALA_TYPE_ENUM (vala_enum_get_type ())
#define VALA_ENUM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_ENUM, ValaEnum))
#define VALA_ENUM_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_ENUM, ValaEnumClass))
#define VALA_IS_ENUM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_ENUM))
#define VALA_IS_ENUM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_ENUM))
#define VALA_ENUM_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_ENUM, ValaEnumClass))

typedef struct _ValaEnum ValaEnum;
typedef struct _ValaEnumClass ValaEnumClass;

#define VALA_TYPE_ERROR_DOMAIN (vala_error_domain_get_type ())
#define VALA_ERROR_DOMAIN(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_ERROR_DOMAIN, ValaErrorDomain))
#define VALA_ERROR_DOMAIN_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_ERROR_DOMAIN, ValaErrorDomainClass))
#define VALA_IS_ERROR_DOMAIN(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_ERROR_DOMAIN))
#define VALA_IS_ERROR_DOMAIN_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_ERROR_DOMAIN))
#define VALA_ERROR_DOMAIN_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_ERROR_DOMAIN, ValaErrorDomainClass))

typedef struct _ValaErrorDomain ValaErrorDomain;
typedef struct _ValaErrorDomainClass ValaErrorDomainClass;

#define VALA_TYPE_DELEGATE (vala_delegate_get_type ())
#define VALA_DELEGATE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_DELEGATE, ValaDelegate))
#define VALA_DELEGATE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_DELEGATE, ValaDelegateClass))
#define VALA_IS_DELEGATE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_DELEGATE))
#define VALA_IS_DELEGATE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_DELEGATE))
#define VALA_DELEGATE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_DELEGATE, ValaDelegateClass))

typedef struct _ValaDelegate ValaDelegate;
typedef struct _ValaDelegateClass ValaDelegateClass;

#define VALA_TYPE_CONSTANT (vala_constant_get_type ())
#define VALA_CONSTANT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CONSTANT, ValaConstant))
#define VALA_CONSTANT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CONSTANT, ValaConstantClass))
#define VALA_IS_CONSTANT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CONSTANT))
#define VALA_IS_CONSTANT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CONSTANT))
#define VALA_CONSTANT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CONSTANT, ValaConstantClass))

typedef struct _ValaConstant ValaConstant;
typedef struct _ValaConstantClass ValaConstantClass;

#define VALA_TYPE_FIELD (vala_field_get_type ())
#define VALA_FIELD(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_FIELD, ValaField))
#define VALA_FIELD_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_FIELD, ValaFieldClass))
#define VALA_IS_FIELD(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_FIELD))
#define VALA_IS_FIELD_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_FIELD))
#define VALA_FIELD_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_FIELD, ValaFieldClass))

typedef struct _ValaField ValaField;
typedef struct _ValaFieldClass ValaFieldClass;

#define VALA_TYPE_SUBROUTINE (vala_subroutine_get_type ())
#define VALA_SUBROUTINE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_SUBROUTINE, ValaSubroutine))
#define VALA_SUBROUTINE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_SUBROUTINE, ValaSubroutineClass))
#define VALA_IS_SUBROUTINE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_SUBROUTINE))
#define VALA_IS_SUBROUTINE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_SUBROUTINE))
#define VALA_SUBROUTINE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_SUBROUTINE, ValaSubroutineClass))

typedef struct _ValaSubroutine ValaSubroutine;
typedef struct _ValaSubroutineClass ValaSubroutineClass;

#define VALA_TYPE_METHOD (vala_method_get_type ())
#define VALA_METHOD(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_METHOD, ValaMethod))
#define VALA_METHOD_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_METHOD, ValaMethodClass))
#define VALA_IS_METHOD(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_METHOD))
#define VALA_IS_METHOD_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_METHOD))
#define VALA_METHOD_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_METHOD, ValaMethodClass))

typedef struct _ValaMethod ValaMethod;
typedef struct _ValaMethodClass ValaMethodClass;

#define VALA_TYPE_PROPERTY (vala_property_get_type ())
#define VALA_PROPERTY(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_PROPERTY, ValaProperty))
#define VALA_PROPERTY_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_PROPERTY, ValaPropertyClass))
#define VALA_IS_PROPERTY(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_PROPERTY))
#define VALA_IS_PROPERTY_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_PROPERTY))
#define VALA_PROPERTY_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_PROPERTY, ValaPropertyClass))

typedef struct _ValaProperty ValaProperty;
typedef struct _ValaPropertyClass ValaPropertyClass;

#define VALA_TYPE_SIGNAL (vala_signal_get_type ())
#define VALA_SIGNAL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_SIGNAL, ValaSignal))
#define VALA_SIGNAL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_SIGNAL, ValaSignalClass))
#define VALA_IS_SIGNAL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_SIGNAL))
#define VALA_IS_SIGNAL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_SIGNAL))
#define VALA_SIGNAL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_SIGNAL, ValaSignalClass))

typedef struct _ValaSignal ValaSignal;
typedef struct _ValaSignalClass ValaSignalClass;

#define VALA_TYPE_CONSTRUCTOR (vala_constructor_get_type ())
#define VALA_CONSTRUCTOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CONSTRUCTOR, ValaConstructor))
#define VALA_CONSTRUCTOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CONSTRUCTOR, ValaConstructorClass))
#define VALA_IS_CONSTRUCTOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CONSTRUCTOR))
#define VALA_IS_CONSTRUCTOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CONSTRUCTOR))
#define VALA_CONSTRUCTOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CONSTRUCTOR, ValaConstructorClass))

typedef struct _ValaConstructor ValaConstructor;
typedef struct _ValaConstructorClass ValaConstructorClass;

#define VALA_TYPE_DESTRUCTOR (vala_destructor_get_type ())
#define VALA_DESTRUCTOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_DESTRUCTOR, ValaDestructor))
#define VALA_DESTRUCTOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_DESTRUCTOR, ValaDestructorClass))
#define VALA_IS_DESTRUCTOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_DESTRUCTOR))
#define VALA_IS_DESTRUCTOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_DESTRUCTOR))
#define VALA_DESTRUCTOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_DESTRUCTOR, ValaDestructorClass))

typedef struct _ValaDestructor ValaDestructor;
typedef struct _ValaDestructorClass ValaDestructorClass;

#define VALA_TYPE_UNRESOLVED_SYMBOL (vala_unresolved_symbol_get_type ())
#define VALA_UNRESOLVED_SYMBOL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_UNRESOLVED_SYMBOL, ValaUnresolvedSymbol))
#define VALA_UNRESOLVED_SYMBOL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_UNRESOLVED_SYMBOL, ValaUnresolvedSymbolClass))
#define VALA_IS_UNRESOLVED_SYMBOL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_UNRESOLVED_SYMBOL))
#define VALA_IS_UNRESOLVED_SYMBOL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_UNRESOLVED_SYMBOL))
#define VALA_UNRESOLVED_SYMBOL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_UNRESOLVED_SYMBOL, ValaUnresolvedSymbolClass))

typedef struct _ValaUnresolvedSymbol ValaUnresolvedSymbol;
typedef struct _ValaUnresolvedSymbolClass ValaUnresolvedSymbolClass;
typedef struct _ValaUnresolvedSymbolPrivate ValaUnresolvedSymbolPrivate;
#define _vala_code_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_code_node_unref (var), NULL)))

#define VALA_TYPE_SOURCE_REFERENCE (vala_source_reference_get_type ())
#define VALA_SOURCE_REFERENCE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_SOURCE_REFERENCE, ValaSourceReference))
#define VALA_SOURCE_REFERENCE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_SOURCE_REFERENCE, ValaSourceReferenceClass))
#define VALA_IS_SOURCE_REFERENCE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_SOURCE_REFERENCE))
#define VALA_IS_SOURCE_REFERENCE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_SOURCE_REFERENCE))
#define VALA_SOURCE_REFERENCE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_SOURCE_REFERENCE, ValaSourceReferenceClass))

typedef struct _ValaSourceReference ValaSourceReference;
typedef struct _ValaSourceReferenceClass ValaSourceReferenceClass;

#define VALA_TYPE_COMMENT (vala_comment_get_type ())
#define VALA_COMMENT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_COMMENT, ValaComment))
#define VALA_COMMENT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_COMMENT, ValaCommentClass))
#define VALA_IS_COMMENT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_COMMENT))
#define VALA_IS_COMMENT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_COMMENT))
#define VALA_COMMENT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_COMMENT, ValaCommentClass))

typedef struct _ValaComment ValaComment;
typedef struct _ValaCommentClass ValaCommentClass;

#define VALA_TYPE_MEMBER_ACCESS (vala_member_access_get_type ())
#define VALA_MEMBER_ACCESS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_MEMBER_ACCESS, ValaMemberAccess))
#define VALA_MEMBER_ACCESS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_MEMBER_ACCESS, ValaMemberAccessClass))
#define VALA_IS_MEMBER_ACCESS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_MEMBER_ACCESS))
#define VALA_IS_MEMBER_ACCESS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_MEMBER_ACCESS))
#define VALA_MEMBER_ACCESS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_MEMBER_ACCESS, ValaMemberAccessClass))

typedef struct _ValaMemberAccess ValaMemberAccess;
typedef struct _ValaMemberAccessClass ValaMemberAccessClass;
#define _g_free0(var) (var = (g_free (var), NULL))

struct _ValaCodeNode {
	GTypeInstance parent_instance;
	volatile int ref_count;
	ValaCodeNodePrivate * priv;
	GList* attributes;
};

struct _ValaCodeNodeClass {
	GTypeClass parent_class;
	void (*finalize) (ValaCodeNode *self);
	void (*accept) (ValaCodeNode* self, ValaCodeVisitor* visitor);
	void (*accept_children) (ValaCodeNode* self, ValaCodeVisitor* visitor);
	gboolean (*check) (ValaCodeNode* self, ValaCodeContext* context);
	void (*emit) (ValaCodeNode* self, ValaCodeGenerator* codegen);
	void (*replace_type) (ValaCodeNode* self, ValaDataType* old_type, ValaDataType* new_type);
	void (*replace_expression) (ValaCodeNode* self, ValaExpression* old_node, ValaExpression* new_node);
	gchar* (*to_string) (ValaCodeNode* self);
	void (*get_defined_variables) (ValaCodeNode* self, ValaCollection* collection);
	void (*get_used_variables) (ValaCodeNode* self, ValaCollection* collection);
};

struct _ValaSymbol {
	ValaCodeNode parent_instance;
	ValaSymbolPrivate * priv;
};

struct _ValaSymbolClass {
	ValaCodeNodeClass parent_class;
	gboolean (*is_instance_member) (ValaSymbol* self);
	gboolean (*is_class_member) (ValaSymbol* self);
	void (*add_namespace) (ValaSymbol* self, ValaNamespace* ns);
	void (*add_class) (ValaSymbol* self, ValaClass* cl);
	void (*add_interface) (ValaSymbol* self, ValaInterface* iface);
	void (*add_struct) (ValaSymbol* self, ValaStruct* st);
	void (*add_enum) (ValaSymbol* self, ValaEnum* en);
	void (*add_error_domain) (ValaSymbol* self, ValaErrorDomain* edomain);
	void (*add_delegate) (ValaSymbol* self, ValaDelegate* d);
	void (*add_constant) (ValaSymbol* self, ValaConstant* constant);
	void (*add_field) (ValaSymbol* self, ValaField* f);
	void (*add_method) (ValaSymbol* self, ValaMethod* m);
	void (*add_property) (ValaSymbol* self, ValaProperty* prop);
	void (*add_signal) (ValaSymbol* self, ValaSignal* sig);
	void (*add_constructor) (ValaSymbol* self, ValaConstructor* c);
	void (*add_destructor) (ValaSymbol* self, ValaDestructor* d);
};

struct _ValaUnresolvedSymbol {
	ValaSymbol parent_instance;
	ValaUnresolvedSymbolPrivate * priv;
};

struct _ValaUnresolvedSymbolClass {
	ValaSymbolClass parent_class;
};

struct _ValaUnresolvedSymbolPrivate {
	ValaUnresolvedSymbol* _inner;
	gboolean _qualified;
};


static gpointer vala_unresolved_symbol_parent_class = NULL;

gpointer vala_code_node_ref (gpointer instance);
void vala_code_node_unref (gpointer instance);
GParamSpec* vala_param_spec_code_node (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void vala_value_set_code_node (GValue* value, gpointer v_object);
void vala_value_take_code_node (GValue* value, gpointer v_object);
gpointer vala_value_get_code_node (const GValue* value);
GType vala_code_node_get_type (void) G_GNUC_CONST;
gpointer vala_code_visitor_ref (gpointer instance);
void vala_code_visitor_unref (gpointer instance);
GParamSpec* vala_param_spec_code_visitor (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void vala_value_set_code_visitor (GValue* value, gpointer v_object);
void vala_value_take_code_visitor (GValue* value, gpointer v_object);
gpointer vala_value_get_code_visitor (const GValue* value);
GType vala_code_visitor_get_type (void) G_GNUC_CONST;
gpointer vala_code_context_ref (gpointer instance);
void vala_code_context_unref (gpointer instance);
GParamSpec* vala_param_spec_code_context (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void vala_value_set_code_context (GValue* value, gpointer v_object);
void vala_value_take_code_context (GValue* value, gpointer v_object);
gpointer vala_value_get_code_context (const GValue* value);
GType vala_code_context_get_type (void) G_GNUC_CONST;
GType vala_code_generator_get_type (void) G_GNUC_CONST;
GType vala_data_type_get_type (void) G_GNUC_CONST;
GType vala_expression_get_type (void) G_GNUC_CONST;
GType vala_symbol_get_type (void) G_GNUC_CONST;
GType vala_variable_get_type (void) G_GNUC_CONST;
GType vala_attribute_get_type (void) G_GNUC_CONST;
GType vala_namespace_get_type (void) G_GNUC_CONST;
GType vala_typesymbol_get_type (void) G_GNUC_CONST;
GType vala_object_type_symbol_get_type (void) G_GNUC_CONST;
GType vala_class_get_type (void) G_GNUC_CONST;
GType vala_interface_get_type (void) G_GNUC_CONST;
GType vala_struct_get_type (void) G_GNUC_CONST;
GType vala_enum_get_type (void) G_GNUC_CONST;
GType vala_error_domain_get_type (void) G_GNUC_CONST;
GType vala_delegate_get_type (void) G_GNUC_CONST;
GType vala_constant_get_type (void) G_GNUC_CONST;
GType vala_field_get_type (void) G_GNUC_CONST;
GType vala_subroutine_get_type (void) G_GNUC_CONST;
GType vala_method_get_type (void) G_GNUC_CONST;
GType vala_property_get_type (void) G_GNUC_CONST;
GType vala_signal_get_type (void) G_GNUC_CONST;
GType vala_constructor_get_type (void) G_GNUC_CONST;
GType vala_destructor_get_type (void) G_GNUC_CONST;
GType vala_unresolved_symbol_get_type (void) G_GNUC_CONST;
#define VALA_UNRESOLVED_SYMBOL_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), VALA_TYPE_UNRESOLVED_SYMBOL, ValaUnresolvedSymbolPrivate))
enum  {
	VALA_UNRESOLVED_SYMBOL_DUMMY_PROPERTY
};
gpointer vala_source_reference_ref (gpointer instance);
void vala_source_reference_unref (gpointer instance);
GParamSpec* vala_param_spec_source_reference (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void vala_value_set_source_reference (GValue* value, gpointer v_object);
void vala_value_take_source_reference (GValue* value, gpointer v_object);
gpointer vala_value_get_source_reference (const GValue* value);
GType vala_source_reference_get_type (void) G_GNUC_CONST;
ValaUnresolvedSymbol* vala_unresolved_symbol_new (ValaUnresolvedSymbol* inner, const gchar* name, ValaSourceReference* source_reference);
ValaUnresolvedSymbol* vala_unresolved_symbol_construct (GType object_type, ValaUnresolvedSymbol* inner, const gchar* name, ValaSourceReference* source_reference);
gpointer vala_comment_ref (gpointer instance);
void vala_comment_unref (gpointer instance);
GParamSpec* vala_param_spec_comment (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void vala_value_set_comment (GValue* value, gpointer v_object);
void vala_value_take_comment (GValue* value, gpointer v_object);
gpointer vala_value_get_comment (const GValue* value);
GType vala_comment_get_type (void) G_GNUC_CONST;
ValaSymbol* vala_symbol_construct (GType object_type, const gchar* name, ValaSourceReference* source_reference, ValaComment* comment);
void vala_unresolved_symbol_set_inner (ValaUnresolvedSymbol* self, ValaUnresolvedSymbol* value);
ValaUnresolvedSymbol* vala_unresolved_symbol_new_from_expression (ValaExpression* expr);
GType vala_member_access_get_type (void) G_GNUC_CONST;
ValaExpression* vala_member_access_get_inner (ValaMemberAccess* self);
const gchar* vala_member_access_get_member_name (ValaMemberAccess* self);
ValaSourceReference* vala_code_node_get_source_reference (ValaCodeNode* self);
void vala_report_error (ValaSourceReference* source, const gchar* message);
static gchar* vala_unresolved_symbol_real_to_string (ValaCodeNode* base);
ValaUnresolvedSymbol* vala_unresolved_symbol_get_inner (ValaUnresolvedSymbol* self);
const gchar* vala_symbol_get_name (ValaSymbol* self);
gchar* vala_code_node_to_string (ValaCodeNode* self);
ValaUnresolvedSymbol* vala_unresolved_symbol_copy (ValaUnresolvedSymbol* self);
gboolean vala_unresolved_symbol_get_qualified (ValaUnresolvedSymbol* self);
void vala_unresolved_symbol_set_qualified (ValaUnresolvedSymbol* self, gboolean value);
static void vala_unresolved_symbol_finalize (ValaCodeNode* obj);


ValaUnresolvedSymbol* vala_unresolved_symbol_construct (GType object_type, ValaUnresolvedSymbol* inner, const gchar* name, ValaSourceReference* source_reference) {
	ValaUnresolvedSymbol* self = NULL;
	const gchar* _tmp0_;
	ValaSourceReference* _tmp1_;
	ValaUnresolvedSymbol* _tmp2_;
	g_return_val_if_fail (name != NULL, NULL);
	_tmp0_ = name;
	_tmp1_ = source_reference;
	self = (ValaUnresolvedSymbol*) vala_symbol_construct (object_type, _tmp0_, _tmp1_, NULL);
	_tmp2_ = inner;
	vala_unresolved_symbol_set_inner (self, _tmp2_);
	return self;
}


ValaUnresolvedSymbol* vala_unresolved_symbol_new (ValaUnresolvedSymbol* inner, const gchar* name, ValaSourceReference* source_reference) {
	return vala_unresolved_symbol_construct (VALA_TYPE_UNRESOLVED_SYMBOL, inner, name, source_reference);
}


static gpointer _vala_code_node_ref0 (gpointer self) {
	return self ? vala_code_node_ref (self) : NULL;
}


ValaUnresolvedSymbol* vala_unresolved_symbol_new_from_expression (ValaExpression* expr) {
	ValaUnresolvedSymbol* result = NULL;
	ValaExpression* _tmp0_;
	ValaMemberAccess* _tmp1_;
	ValaMemberAccess* ma;
	ValaMemberAccess* _tmp2_;
	ValaExpression* _tmp26_;
	ValaSourceReference* _tmp27_;
	ValaSourceReference* _tmp28_;
	g_return_val_if_fail (expr != NULL, NULL);
	_tmp0_ = expr;
	_tmp1_ = _vala_code_node_ref0 (G_TYPE_CHECK_INSTANCE_TYPE (_tmp0_, VALA_TYPE_MEMBER_ACCESS) ? ((ValaMemberAccess*) _tmp0_) : NULL);
	ma = _tmp1_;
	_tmp2_ = ma;
	if (_tmp2_ != NULL) {
		ValaMemberAccess* _tmp3_;
		ValaExpression* _tmp4_;
		ValaExpression* _tmp5_;
		_tmp3_ = ma;
		_tmp4_ = vala_member_access_get_inner (_tmp3_);
		_tmp5_ = _tmp4_;
		if (_tmp5_ != NULL) {
			ValaMemberAccess* _tmp6_;
			ValaExpression* _tmp7_;
			ValaExpression* _tmp8_;
			ValaUnresolvedSymbol* _tmp9_ = NULL;
			ValaUnresolvedSymbol* _tmp10_;
			ValaMemberAccess* _tmp11_;
			const gchar* _tmp12_;
			const gchar* _tmp13_;
			ValaMemberAccess* _tmp14_;
			ValaSourceReference* _tmp15_;
			ValaSourceReference* _tmp16_;
			ValaUnresolvedSymbol* _tmp17_;
			ValaUnresolvedSymbol* _tmp18_;
			_tmp6_ = ma;
			_tmp7_ = vala_member_access_get_inner (_tmp6_);
			_tmp8_ = _tmp7_;
			_tmp9_ = vala_unresolved_symbol_new_from_expression (_tmp8_);
			_tmp10_ = _tmp9_;
			_tmp11_ = ma;
			_tmp12_ = vala_member_access_get_member_name (_tmp11_);
			_tmp13_ = _tmp12_;
			_tmp14_ = ma;
			_tmp15_ = vala_code_node_get_source_reference ((ValaCodeNode*) _tmp14_);
			_tmp16_ = _tmp15_;
			_tmp17_ = vala_unresolved_symbol_new (_tmp10_, _tmp13_, _tmp16_);
			_tmp18_ = _tmp17_;
			_vala_code_node_unref0 (_tmp10_);
			result = _tmp18_;
			_vala_code_node_unref0 (ma);
			return result;
		} else {
			ValaMemberAccess* _tmp19_;
			const gchar* _tmp20_;
			const gchar* _tmp21_;
			ValaMemberAccess* _tmp22_;
			ValaSourceReference* _tmp23_;
			ValaSourceReference* _tmp24_;
			ValaUnresolvedSymbol* _tmp25_;
			_tmp19_ = ma;
			_tmp20_ = vala_member_access_get_member_name (_tmp19_);
			_tmp21_ = _tmp20_;
			_tmp22_ = ma;
			_tmp23_ = vala_code_node_get_source_reference ((ValaCodeNode*) _tmp22_);
			_tmp24_ = _tmp23_;
			_tmp25_ = vala_unresolved_symbol_new (NULL, _tmp21_, _tmp24_);
			result = _tmp25_;
			_vala_code_node_unref0 (ma);
			return result;
		}
	}
	_tmp26_ = expr;
	_tmp27_ = vala_code_node_get_source_reference ((ValaCodeNode*) _tmp26_);
	_tmp28_ = _tmp27_;
	vala_report_error (_tmp28_, "Type reference must be simple name or member access expression");
	result = NULL;
	_vala_code_node_unref0 (ma);
	return result;
}


static gchar* vala_unresolved_symbol_real_to_string (ValaCodeNode* base) {
	ValaUnresolvedSymbol * self;
	gchar* result = NULL;
	ValaUnresolvedSymbol* _tmp0_;
	self = (ValaUnresolvedSymbol*) base;
	_tmp0_ = self->priv->_inner;
	if (_tmp0_ == NULL) {
		const gchar* _tmp1_;
		const gchar* _tmp2_;
		gchar* _tmp3_;
		_tmp1_ = vala_symbol_get_name ((ValaSymbol*) self);
		_tmp2_ = _tmp1_;
		_tmp3_ = g_strdup (_tmp2_);
		result = _tmp3_;
		return result;
	} else {
		ValaUnresolvedSymbol* _tmp4_;
		gchar* _tmp5_ = NULL;
		gchar* _tmp6_;
		const gchar* _tmp7_;
		const gchar* _tmp8_;
		gchar* _tmp9_ = NULL;
		gchar* _tmp10_;
		_tmp4_ = self->priv->_inner;
		_tmp5_ = vala_code_node_to_string ((ValaCodeNode*) _tmp4_);
		_tmp6_ = _tmp5_;
		_tmp7_ = vala_symbol_get_name ((ValaSymbol*) self);
		_tmp8_ = _tmp7_;
		_tmp9_ = g_strdup_printf ("%s.%s", _tmp6_, _tmp8_);
		_tmp10_ = _tmp9_;
		_g_free0 (_tmp6_);
		result = _tmp10_;
		return result;
	}
}


ValaUnresolvedSymbol* vala_unresolved_symbol_copy (ValaUnresolvedSymbol* self) {
	ValaUnresolvedSymbol* result = NULL;
	ValaUnresolvedSymbol* _tmp0_;
	const gchar* _tmp1_;
	const gchar* _tmp2_;
	ValaSourceReference* _tmp3_;
	ValaSourceReference* _tmp4_;
	ValaUnresolvedSymbol* _tmp5_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_inner;
	_tmp1_ = vala_symbol_get_name ((ValaSymbol*) self);
	_tmp2_ = _tmp1_;
	_tmp3_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
	_tmp4_ = _tmp3_;
	_tmp5_ = vala_unresolved_symbol_new (_tmp0_, _tmp2_, _tmp4_);
	result = _tmp5_;
	return result;
}


ValaUnresolvedSymbol* vala_unresolved_symbol_get_inner (ValaUnresolvedSymbol* self) {
	ValaUnresolvedSymbol* result;
	ValaUnresolvedSymbol* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_inner;
	result = _tmp0_;
	return result;
}


void vala_unresolved_symbol_set_inner (ValaUnresolvedSymbol* self, ValaUnresolvedSymbol* value) {
	ValaUnresolvedSymbol* _tmp0_;
	ValaUnresolvedSymbol* _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = _vala_code_node_ref0 (_tmp0_);
	_vala_code_node_unref0 (self->priv->_inner);
	self->priv->_inner = _tmp1_;
}


gboolean vala_unresolved_symbol_get_qualified (ValaUnresolvedSymbol* self) {
	gboolean result;
	gboolean _tmp0_;
	g_return_val_if_fail (self != NULL, FALSE);
	_tmp0_ = self->priv->_qualified;
	result = _tmp0_;
	return result;
}


void vala_unresolved_symbol_set_qualified (ValaUnresolvedSymbol* self, gboolean value) {
	gboolean _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	self->priv->_qualified = _tmp0_;
}


static void vala_unresolved_symbol_class_init (ValaUnresolvedSymbolClass * klass) {
	vala_unresolved_symbol_parent_class = g_type_class_peek_parent (klass);
	VALA_CODE_NODE_CLASS (klass)->finalize = vala_unresolved_symbol_finalize;
	g_type_class_add_private (klass, sizeof (ValaUnresolvedSymbolPrivate));
	VALA_CODE_NODE_CLASS (klass)->to_string = vala_unresolved_symbol_real_to_string;
}


static void vala_unresolved_symbol_instance_init (ValaUnresolvedSymbol * self) {
	self->priv = VALA_UNRESOLVED_SYMBOL_GET_PRIVATE (self);
}


static void vala_unresolved_symbol_finalize (ValaCodeNode* obj) {
	ValaUnresolvedSymbol * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_TYPE_UNRESOLVED_SYMBOL, ValaUnresolvedSymbol);
	_vala_code_node_unref0 (self->priv->_inner);
	VALA_CODE_NODE_CLASS (vala_unresolved_symbol_parent_class)->finalize (obj);
}


/**
 * An unresolved reference to a symbol.
 */
GType vala_unresolved_symbol_get_type (void) {
	static volatile gsize vala_unresolved_symbol_type_id__volatile = 0;
	if (g_once_init_enter (&vala_unresolved_symbol_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaUnresolvedSymbolClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_unresolved_symbol_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaUnresolvedSymbol), 0, (GInstanceInitFunc) vala_unresolved_symbol_instance_init, NULL };
		GType vala_unresolved_symbol_type_id;
		vala_unresolved_symbol_type_id = g_type_register_static (VALA_TYPE_SYMBOL, "ValaUnresolvedSymbol", &g_define_type_info, 0);
		g_once_init_leave (&vala_unresolved_symbol_type_id__volatile, vala_unresolved_symbol_type_id);
	}
	return vala_unresolved_symbol_type_id__volatile;
}



