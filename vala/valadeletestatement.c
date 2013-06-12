/* valadeletestatement.c generated by valac, the Vala compiler
 * generated from valadeletestatement.vala, do not modify */

/* valadeletestatement.vala
 *
 * Copyright (C) 2008-2011  Jürg Billeter
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

#define VALA_TYPE_STATEMENT (vala_statement_get_type ())
#define VALA_STATEMENT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_STATEMENT, ValaStatement))
#define VALA_IS_STATEMENT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_STATEMENT))
#define VALA_STATEMENT_GET_INTERFACE(obj) (G_TYPE_INSTANCE_GET_INTERFACE ((obj), VALA_TYPE_STATEMENT, ValaStatementIface))

typedef struct _ValaStatement ValaStatement;
typedef struct _ValaStatementIface ValaStatementIface;

#define VALA_TYPE_DELETE_STATEMENT (vala_delete_statement_get_type ())
#define VALA_DELETE_STATEMENT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_DELETE_STATEMENT, ValaDeleteStatement))
#define VALA_DELETE_STATEMENT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_DELETE_STATEMENT, ValaDeleteStatementClass))
#define VALA_IS_DELETE_STATEMENT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_DELETE_STATEMENT))
#define VALA_IS_DELETE_STATEMENT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_DELETE_STATEMENT))
#define VALA_DELETE_STATEMENT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_DELETE_STATEMENT, ValaDeleteStatementClass))

typedef struct _ValaDeleteStatement ValaDeleteStatement;
typedef struct _ValaDeleteStatementClass ValaDeleteStatementClass;
typedef struct _ValaDeleteStatementPrivate ValaDeleteStatementPrivate;
#define _vala_code_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_code_node_unref (var), NULL)))

#define VALA_TYPE_SOURCE_REFERENCE (vala_source_reference_get_type ())
#define VALA_SOURCE_REFERENCE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_SOURCE_REFERENCE, ValaSourceReference))
#define VALA_SOURCE_REFERENCE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_SOURCE_REFERENCE, ValaSourceReferenceClass))
#define VALA_IS_SOURCE_REFERENCE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_SOURCE_REFERENCE))
#define VALA_IS_SOURCE_REFERENCE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_SOURCE_REFERENCE))
#define VALA_SOURCE_REFERENCE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_SOURCE_REFERENCE, ValaSourceReferenceClass))

typedef struct _ValaSourceReference ValaSourceReference;
typedef struct _ValaSourceReferenceClass ValaSourceReferenceClass;

#define VALA_TYPE_POINTER_TYPE (vala_pointer_type_get_type ())
#define VALA_POINTER_TYPE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_POINTER_TYPE, ValaPointerType))
#define VALA_POINTER_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_POINTER_TYPE, ValaPointerTypeClass))
#define VALA_IS_POINTER_TYPE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_POINTER_TYPE))
#define VALA_IS_POINTER_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_POINTER_TYPE))
#define VALA_POINTER_TYPE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_POINTER_TYPE, ValaPointerTypeClass))

typedef struct _ValaPointerType ValaPointerType;
typedef struct _ValaPointerTypeClass ValaPointerTypeClass;

#define VALA_TYPE_REFERENCE_TYPE (vala_reference_type_get_type ())
#define VALA_REFERENCE_TYPE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_REFERENCE_TYPE, ValaReferenceType))
#define VALA_REFERENCE_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_REFERENCE_TYPE, ValaReferenceTypeClass))
#define VALA_IS_REFERENCE_TYPE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_REFERENCE_TYPE))
#define VALA_IS_REFERENCE_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_REFERENCE_TYPE))
#define VALA_REFERENCE_TYPE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_REFERENCE_TYPE, ValaReferenceTypeClass))

typedef struct _ValaReferenceType ValaReferenceType;
typedef struct _ValaReferenceTypeClass ValaReferenceTypeClass;

#define VALA_TYPE_ARRAY_TYPE (vala_array_type_get_type ())
#define VALA_ARRAY_TYPE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_ARRAY_TYPE, ValaArrayType))
#define VALA_ARRAY_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_ARRAY_TYPE, ValaArrayTypeClass))
#define VALA_IS_ARRAY_TYPE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_ARRAY_TYPE))
#define VALA_IS_ARRAY_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_ARRAY_TYPE))
#define VALA_ARRAY_TYPE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_ARRAY_TYPE, ValaArrayTypeClass))

typedef struct _ValaArrayType ValaArrayType;
typedef struct _ValaArrayTypeClass ValaArrayTypeClass;
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

struct _ValaStatementIface {
	GTypeInterface parent_iface;
};

struct _ValaDeleteStatement {
	ValaCodeNode parent_instance;
	ValaDeleteStatementPrivate * priv;
};

struct _ValaDeleteStatementClass {
	ValaCodeNodeClass parent_class;
};

struct _ValaDeleteStatementPrivate {
	ValaExpression* _expression;
};


static gpointer vala_delete_statement_parent_class = NULL;
static ValaStatementIface* vala_delete_statement_vala_statement_parent_iface = NULL;

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
GType vala_statement_get_type (void) G_GNUC_CONST;
GType vala_delete_statement_get_type (void) G_GNUC_CONST;
#define VALA_DELETE_STATEMENT_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), VALA_TYPE_DELETE_STATEMENT, ValaDeleteStatementPrivate))
enum  {
	VALA_DELETE_STATEMENT_DUMMY_PROPERTY
};
gpointer vala_source_reference_ref (gpointer instance);
void vala_source_reference_unref (gpointer instance);
GParamSpec* vala_param_spec_source_reference (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void vala_value_set_source_reference (GValue* value, gpointer v_object);
void vala_value_take_source_reference (GValue* value, gpointer v_object);
gpointer vala_value_get_source_reference (const GValue* value);
GType vala_source_reference_get_type (void) G_GNUC_CONST;
ValaDeleteStatement* vala_delete_statement_new (ValaExpression* expression, ValaSourceReference* source_reference);
ValaDeleteStatement* vala_delete_statement_construct (GType object_type, ValaExpression* expression, ValaSourceReference* source_reference);
ValaCodeNode* vala_code_node_construct (GType object_type);
void vala_delete_statement_set_expression (ValaDeleteStatement* self, ValaExpression* value);
void vala_code_node_set_source_reference (ValaCodeNode* self, ValaSourceReference* value);
static void vala_delete_statement_real_accept (ValaCodeNode* base, ValaCodeVisitor* visitor);
void vala_code_visitor_visit_delete_statement (ValaCodeVisitor* self, ValaDeleteStatement* stmt);
static void vala_delete_statement_real_accept_children (ValaCodeNode* base, ValaCodeVisitor* visitor);
ValaExpression* vala_delete_statement_get_expression (ValaDeleteStatement* self);
void vala_code_node_accept (ValaCodeNode* self, ValaCodeVisitor* visitor);
static gboolean vala_delete_statement_real_check (ValaCodeNode* base, ValaCodeContext* context);
gboolean vala_code_node_get_checked (ValaCodeNode* self);
gboolean vala_code_node_get_error (ValaCodeNode* self);
void vala_code_node_set_checked (ValaCodeNode* self, gboolean value);
gboolean vala_code_node_check (ValaCodeNode* self, ValaCodeContext* context);
ValaDataType* vala_expression_get_value_type (ValaExpression* self);
GType vala_pointer_type_get_type (void) G_GNUC_CONST;
GType vala_reference_type_get_type (void) G_GNUC_CONST;
GType vala_array_type_get_type (void) G_GNUC_CONST;
void vala_code_node_set_error (ValaCodeNode* self, gboolean value);
void vala_report_error (ValaSourceReference* source, const gchar* message);
ValaSourceReference* vala_code_node_get_source_reference (ValaCodeNode* self);
gchar* vala_code_node_to_string (ValaCodeNode* self);
static void vala_delete_statement_real_emit (ValaCodeNode* base, ValaCodeGenerator* codegen);
void vala_code_node_emit (ValaCodeNode* self, ValaCodeGenerator* codegen);
void vala_code_node_set_parent_node (ValaCodeNode* self, ValaCodeNode* value);
static void vala_delete_statement_finalize (ValaCodeNode* obj);


ValaDeleteStatement* vala_delete_statement_construct (GType object_type, ValaExpression* expression, ValaSourceReference* source_reference) {
	ValaDeleteStatement* self = NULL;
	ValaExpression* _tmp0_;
	ValaSourceReference* _tmp1_;
	g_return_val_if_fail (expression != NULL, NULL);
	self = (ValaDeleteStatement*) vala_code_node_construct (object_type);
	_tmp0_ = expression;
	vala_delete_statement_set_expression (self, _tmp0_);
	_tmp1_ = source_reference;
	vala_code_node_set_source_reference ((ValaCodeNode*) self, _tmp1_);
	return self;
}


ValaDeleteStatement* vala_delete_statement_new (ValaExpression* expression, ValaSourceReference* source_reference) {
	return vala_delete_statement_construct (VALA_TYPE_DELETE_STATEMENT, expression, source_reference);
}


static void vala_delete_statement_real_accept (ValaCodeNode* base, ValaCodeVisitor* visitor) {
	ValaDeleteStatement * self;
	ValaCodeVisitor* _tmp0_;
	self = (ValaDeleteStatement*) base;
	g_return_if_fail (visitor != NULL);
	_tmp0_ = visitor;
	vala_code_visitor_visit_delete_statement (_tmp0_, self);
}


static void vala_delete_statement_real_accept_children (ValaCodeNode* base, ValaCodeVisitor* visitor) {
	ValaDeleteStatement * self;
	ValaExpression* _tmp0_;
	ValaExpression* _tmp1_;
	ValaCodeVisitor* _tmp2_;
	self = (ValaDeleteStatement*) base;
	g_return_if_fail (visitor != NULL);
	_tmp0_ = vala_delete_statement_get_expression (self);
	_tmp1_ = _tmp0_;
	_tmp2_ = visitor;
	vala_code_node_accept ((ValaCodeNode*) _tmp1_, _tmp2_);
}


static gboolean vala_delete_statement_real_check (ValaCodeNode* base, ValaCodeContext* context) {
	ValaDeleteStatement * self;
	gboolean result = FALSE;
	gboolean _tmp0_;
	gboolean _tmp1_;
	ValaExpression* _tmp4_;
	ValaExpression* _tmp5_;
	ValaCodeContext* _tmp6_;
	gboolean _tmp7_ = FALSE;
	gboolean _tmp8_ = FALSE;
	ValaExpression* _tmp9_;
	ValaExpression* _tmp10_;
	ValaDataType* _tmp11_;
	ValaDataType* _tmp12_;
	gboolean _tmp17_;
	gboolean _tmp28_;
	gboolean _tmp29_;
	self = (ValaDeleteStatement*) base;
	g_return_val_if_fail (context != NULL, FALSE);
	_tmp0_ = vala_code_node_get_checked ((ValaCodeNode*) self);
	_tmp1_ = _tmp0_;
	if (_tmp1_) {
		gboolean _tmp2_;
		gboolean _tmp3_;
		_tmp2_ = vala_code_node_get_error ((ValaCodeNode*) self);
		_tmp3_ = _tmp2_;
		result = !_tmp3_;
		return result;
	}
	vala_code_node_set_checked ((ValaCodeNode*) self, TRUE);
	_tmp4_ = vala_delete_statement_get_expression (self);
	_tmp5_ = _tmp4_;
	_tmp6_ = context;
	_tmp7_ = vala_code_node_check ((ValaCodeNode*) _tmp5_, _tmp6_);
	if (!_tmp7_) {
		result = FALSE;
		return result;
	}
	_tmp9_ = vala_delete_statement_get_expression (self);
	_tmp10_ = _tmp9_;
	_tmp11_ = vala_expression_get_value_type (_tmp10_);
	_tmp12_ = _tmp11_;
	if (!G_TYPE_CHECK_INSTANCE_TYPE (_tmp12_, VALA_TYPE_POINTER_TYPE)) {
		ValaExpression* _tmp13_;
		ValaExpression* _tmp14_;
		ValaDataType* _tmp15_;
		ValaDataType* _tmp16_;
		_tmp13_ = vala_delete_statement_get_expression (self);
		_tmp14_ = _tmp13_;
		_tmp15_ = vala_expression_get_value_type (_tmp14_);
		_tmp16_ = _tmp15_;
		_tmp8_ = !G_TYPE_CHECK_INSTANCE_TYPE (_tmp16_, VALA_TYPE_ARRAY_TYPE);
	} else {
		_tmp8_ = FALSE;
	}
	_tmp17_ = _tmp8_;
	if (_tmp17_) {
		ValaSourceReference* _tmp18_;
		ValaSourceReference* _tmp19_;
		ValaExpression* _tmp20_;
		ValaExpression* _tmp21_;
		ValaDataType* _tmp22_;
		ValaDataType* _tmp23_;
		gchar* _tmp24_ = NULL;
		gchar* _tmp25_;
		gchar* _tmp26_ = NULL;
		gchar* _tmp27_;
		vala_code_node_set_error ((ValaCodeNode*) self, TRUE);
		_tmp18_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
		_tmp19_ = _tmp18_;
		_tmp20_ = vala_delete_statement_get_expression (self);
		_tmp21_ = _tmp20_;
		_tmp22_ = vala_expression_get_value_type (_tmp21_);
		_tmp23_ = _tmp22_;
		_tmp24_ = vala_code_node_to_string ((ValaCodeNode*) _tmp23_);
		_tmp25_ = _tmp24_;
		_tmp26_ = g_strdup_printf ("delete operator not supported for `%s'", _tmp25_);
		_tmp27_ = _tmp26_;
		vala_report_error (_tmp19_, _tmp27_);
		_g_free0 (_tmp27_);
		_g_free0 (_tmp25_);
	}
	_tmp28_ = vala_code_node_get_error ((ValaCodeNode*) self);
	_tmp29_ = _tmp28_;
	result = !_tmp29_;
	return result;
}


static void vala_delete_statement_real_emit (ValaCodeNode* base, ValaCodeGenerator* codegen) {
	ValaDeleteStatement * self;
	ValaExpression* _tmp0_;
	ValaExpression* _tmp1_;
	ValaCodeGenerator* _tmp2_;
	ValaCodeGenerator* _tmp3_;
	self = (ValaDeleteStatement*) base;
	g_return_if_fail (codegen != NULL);
	_tmp0_ = vala_delete_statement_get_expression (self);
	_tmp1_ = _tmp0_;
	_tmp2_ = codegen;
	vala_code_node_emit ((ValaCodeNode*) _tmp1_, _tmp2_);
	_tmp3_ = codegen;
	vala_code_visitor_visit_delete_statement ((ValaCodeVisitor*) _tmp3_, self);
}


ValaExpression* vala_delete_statement_get_expression (ValaDeleteStatement* self) {
	ValaExpression* result;
	ValaExpression* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_expression;
	result = _tmp0_;
	return result;
}


static gpointer _vala_code_node_ref0 (gpointer self) {
	return self ? vala_code_node_ref (self) : NULL;
}


void vala_delete_statement_set_expression (ValaDeleteStatement* self, ValaExpression* value) {
	ValaExpression* _tmp0_;
	ValaExpression* _tmp1_;
	ValaExpression* _tmp2_;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = _vala_code_node_ref0 (_tmp0_);
	_vala_code_node_unref0 (self->priv->_expression);
	self->priv->_expression = _tmp1_;
	_tmp2_ = self->priv->_expression;
	vala_code_node_set_parent_node ((ValaCodeNode*) _tmp2_, (ValaCodeNode*) self);
}


static void vala_delete_statement_class_init (ValaDeleteStatementClass * klass) {
	vala_delete_statement_parent_class = g_type_class_peek_parent (klass);
	VALA_CODE_NODE_CLASS (klass)->finalize = vala_delete_statement_finalize;
	g_type_class_add_private (klass, sizeof (ValaDeleteStatementPrivate));
	VALA_CODE_NODE_CLASS (klass)->accept = vala_delete_statement_real_accept;
	VALA_CODE_NODE_CLASS (klass)->accept_children = vala_delete_statement_real_accept_children;
	VALA_CODE_NODE_CLASS (klass)->check = vala_delete_statement_real_check;
	VALA_CODE_NODE_CLASS (klass)->emit = vala_delete_statement_real_emit;
}


static void vala_delete_statement_vala_statement_interface_init (ValaStatementIface * iface) {
	vala_delete_statement_vala_statement_parent_iface = g_type_interface_peek_parent (iface);
}


static void vala_delete_statement_instance_init (ValaDeleteStatement * self) {
	self->priv = VALA_DELETE_STATEMENT_GET_PRIVATE (self);
}


static void vala_delete_statement_finalize (ValaCodeNode* obj) {
	ValaDeleteStatement * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_TYPE_DELETE_STATEMENT, ValaDeleteStatement);
	_vala_code_node_unref0 (self->priv->_expression);
	VALA_CODE_NODE_CLASS (vala_delete_statement_parent_class)->finalize (obj);
}


/**
 * Represents a delete statement e.g. "delete a".
 */
GType vala_delete_statement_get_type (void) {
	static volatile gsize vala_delete_statement_type_id__volatile = 0;
	if (g_once_init_enter (&vala_delete_statement_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaDeleteStatementClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_delete_statement_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaDeleteStatement), 0, (GInstanceInitFunc) vala_delete_statement_instance_init, NULL };
		static const GInterfaceInfo vala_statement_info = { (GInterfaceInitFunc) vala_delete_statement_vala_statement_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		GType vala_delete_statement_type_id;
		vala_delete_statement_type_id = g_type_register_static (VALA_TYPE_CODE_NODE, "ValaDeleteStatement", &g_define_type_info, 0);
		g_type_add_interface_static (vala_delete_statement_type_id, VALA_TYPE_STATEMENT, &vala_statement_info);
		g_once_init_leave (&vala_delete_statement_type_id__volatile, vala_delete_statement_type_id);
	}
	return vala_delete_statement_type_id__volatile;
}



