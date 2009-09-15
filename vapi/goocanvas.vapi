/* goocanvas.vapi generated by vapigen, do not modify. */

[CCode (cprefix = "Goo", lower_case_cprefix = "goo_")]
namespace Goo {
	[Compact]
	[CCode (copy_function = "goo_cairo_matrix_copy", type_id = "GOO_TYPE_CAIRO_MATRIX", cheader_filename = "goocanvas.h")]
	public class CairoMatrix {
		public static Cairo.Matrix copy (Cairo.Matrix matrix);
	}
	[CCode (cheader_filename = "goocanvas.h")]
	public class Canvas : Gtk.Container, Atk.Implementor, Gtk.Buildable {
		public Goo.CanvasBounds bounds;
		public weak Gdk.Window canvas_window;
		public int canvas_x_offset;
		public int canvas_y_offset;
		public Gdk.EventCrossing crossing_event;
		public double device_to_pixels_x;
		public double device_to_pixels_y;
		public weak Goo.CanvasItem focused_item;
		public int freeze_count;
		public weak Gtk.Adjustment hadjustment;
		public uint idle_id;
		public weak Goo.CanvasItem keyboard_grab_item;
		public weak GLib.HashTable model_to_item;
		public uint need_entire_subtree_update;
		public uint need_update;
		public uint pointer_grab_button;
		public weak Goo.CanvasItem pointer_grab_initial_item;
		public weak Goo.CanvasItem pointer_grab_item;
		public weak Goo.CanvasItem pointer_item;
		public weak Goo.CanvasItem root_item;
		public weak Goo.CanvasItemModel root_item_model;
		public weak Gdk.Window tmp_window;
		public weak Gtk.Adjustment vadjustment;
		public weak GLib.List widget_items;
		[CCode (type = "GtkWidget*", has_construct_function = false)]
		public Canvas ();
		public void convert_from_item_space (Goo.CanvasItem item, double x, double y);
		public void convert_from_pixels (double x, double y);
		public void convert_to_item_space (Goo.CanvasItem item, double x, double y);
		public void convert_to_pixels (double x, double y);
		public unowned Cairo.Context create_cairo_context ();
		public virtual unowned Goo.CanvasItem create_item (Goo.CanvasItemModel model);
		public static void create_path (GLib.Array commands, Cairo.Context cr);
		public void get_bounds (double left, double top, double right, double bottom);
		public double get_default_line_width ();
		public unowned Goo.CanvasItem get_item (Goo.CanvasItemModel model);
		public unowned Goo.CanvasItem get_item_at (double x, double y, bool is_pointer_event);
		public unowned GLib.List get_items_at (double x, double y, bool is_pointer_event);
		public unowned GLib.List get_items_in_area (Goo.CanvasBounds area, bool inside_area, bool allow_overlaps, bool include_containers);
		public unowned Goo.CanvasItem get_root_item ();
		public unowned Goo.CanvasItemModel get_root_item_model ();
		public double get_scale ();
		public void grab_focus (Goo.CanvasItem item);
		public Gdk.GrabStatus keyboard_grab (Goo.CanvasItem item, bool owner_events, uint32 time);
		public void keyboard_ungrab (Goo.CanvasItem item, uint32 time);
		public static void marshal_BOOLEAN__BOXED (GLib.Closure closure, GLib.Value return_value, uint n_param_values, GLib.Value param_values, void* invocation_hint, void* marshal_data);
		public static void marshal_BOOLEAN__OBJECT_BOXED (GLib.Closure closure, GLib.Value return_value, uint n_param_values, GLib.Value param_values, void* invocation_hint, void* marshal_data);
		public static void marshal_VOID__INT_INT (GLib.Closure closure, GLib.Value return_value, uint n_param_values, GLib.Value param_values, void* invocation_hint, void* marshal_data);
		public static void marshal_VOID__OBJECT_OBJECT (GLib.Closure closure, GLib.Value return_value, uint n_param_values, GLib.Value param_values, void* invocation_hint, void* marshal_data);
		public static unowned GLib.Array parse_path_data (string path_data);
		public Gdk.GrabStatus pointer_grab (Goo.CanvasItem item, Gdk.EventMask event_mask, Gdk.Cursor cursor, uint32 time);
		public void pointer_ungrab (Goo.CanvasItem item, uint32 time);
		public void register_widget_item (Goo.CanvasWidget witem);
		public void render (Cairo.Context cr, Goo.CanvasBounds bounds, double scale);
		public void request_redraw (Goo.CanvasBounds bounds);
		public void request_update ();
		public void scroll_to (double left, double top);
		public void set_bounds (double left, double top, double right, double bottom);
		public void set_root_item (Goo.CanvasItem item);
		public void set_root_item_model (Goo.CanvasItemModel model);
		public void set_scale (double scale);
		public void unregister_item (Goo.CanvasItemModel model);
		public void unregister_widget_item (Goo.CanvasWidget witem);
		public void update ();
		[NoAccessorMethod]
		public Gtk.AnchorType anchor { get; set; }
		[NoAccessorMethod]
		public bool automatic_bounds { get; set; }
		[NoAccessorMethod]
		public string background_color { set; }
		[NoAccessorMethod]
		public uint background_color_rgb { set; }
		[NoAccessorMethod]
		public bool bounds_from_origin { get; set; }
		[NoAccessorMethod]
		public double bounds_padding { get; set; }
		[NoAccessorMethod]
		public bool integer_layout { get; set; }
		[NoAccessorMethod]
		public double resolution_x { get; set; }
		[NoAccessorMethod]
		public double resolution_y { get; set; }
		public double scale { get; set; }
		[NoAccessorMethod]
		public double scale_x { get; set; }
		[NoAccessorMethod]
		public double scale_y { get; set; }
		[NoAccessorMethod]
		public Gtk.Unit units { get; set; }
		[NoAccessorMethod]
		public double x1 { get; set; }
		[NoAccessorMethod]
		public double x2 { get; set; }
		[NoAccessorMethod]
		public double y1 { get; set; }
		[NoAccessorMethod]
		public double y2 { get; set; }
		public virtual signal void item_created (Goo.CanvasItem item, Goo.CanvasItemModel model);
		public virtual signal void set_scroll_adjustments (Gtk.Adjustment hadjustment, Gtk.Adjustment vadjustment);
	}
	[CCode (cheader_filename = "goocanvas.h")]
	public class CanvasEllipse : Goo.CanvasItemSimple, Goo.CanvasItem {
		public Goo.CanvasEllipseData ellipse_data;
		[CCode (cname = "goo_canvas_ellipse_new")]
		public static unowned Goo.CanvasEllipse create (Goo.CanvasItem? parent, double center_x, double center_y, double radius_x, double radius_y, ...);
		[NoAccessorMethod]
		public double center_x { get; set; }
		[NoAccessorMethod]
		public double center_y { get; set; }
		[NoAccessorMethod]
		public double radius_x { get; set; }
		[NoAccessorMethod]
		public double radius_y { get; set; }
	}
	[CCode (cheader_filename = "goocanvas.h")]
	public class CanvasEllipseModel : Goo.CanvasItemModelSimple, Goo.CanvasItemModel {
		public Goo.CanvasEllipseData ellipse_data;
		[CCode (cname = "goo_canvas_ellipse_model_new")]
		public static unowned Goo.CanvasEllipseModel create (Goo.CanvasItemModel? parent, double center_x, double center_y, double radius_x, double radius_y, ...);
		[NoAccessorMethod]
		public double center_x { get; set; }
		[NoAccessorMethod]
		public double center_y { get; set; }
		[NoAccessorMethod]
		public double radius_x { get; set; }
		[NoAccessorMethod]
		public double radius_y { get; set; }
	}
	[CCode (cheader_filename = "goocanvas.h")]
	public class CanvasGroup : Goo.CanvasItemSimple, Goo.CanvasItem {
		public weak GLib.PtrArray items;
		[CCode (cname = "goo_canvas_group_new")]
		public static unowned Goo.CanvasGroup create (Goo.CanvasItem? parent, ...);
	}
	[CCode (cheader_filename = "goocanvas.h")]
	public class CanvasGroupModel : Goo.CanvasItemModelSimple, Goo.CanvasItemModel {
		public weak GLib.PtrArray children;
		[CCode (cname = "goo_canvas_group_model_new")]
		public static unowned Goo.CanvasGroupModel create (Goo.CanvasItemModel? parent, ...);
	}
	[CCode (cheader_filename = "goocanvas.h")]
	public class CanvasImage : Goo.CanvasItemSimple, Goo.CanvasItem {
		public Goo.CanvasImageData image_data;
		[CCode (cname = "goo_image_group_new")]
		public static unowned Goo.CanvasImage create (Goo.CanvasItem? parent, Gdk.Pixbuf pixbuf, double x, double y, ...);
		[NoAccessorMethod]
		public double height { get; set; }
		[NoAccessorMethod]
		public Goo.CairoPattern pattern { get; set; }
		[NoAccessorMethod]
		public Gdk.Pixbuf pixbuf { set; }
		[NoAccessorMethod]
		public double width { get; set; }
		[NoAccessorMethod]
		public double x { get; set; }
		[NoAccessorMethod]
		public double y { get; set; }
	}
	[CCode (cheader_filename = "goocanvas.h")]
	public class CanvasImageModel : Goo.CanvasItemModelSimple, Goo.CanvasItemModel {
		public Goo.CanvasImageData image_data;
		[CCode (cname = "goo_canvas_image_model_new")]
		public static unowned Goo.CanvasImageModel create (Goo.CanvasItemModel? parent, Gdk.Pixbuf pixbuf, double x, double y, ...);
		[NoAccessorMethod]
		public double height { get; set; }
		[NoAccessorMethod]
		public Goo.CairoPattern pattern { get; set; }
		[NoAccessorMethod]
		public Gdk.Pixbuf pixbuf { set; }
		[NoAccessorMethod]
		public double width { get; set; }
		[NoAccessorMethod]
		public double x { get; set; }
		[NoAccessorMethod]
		public double y { get; set; }
	}
	[CCode (cheader_filename = "goocanvas.h")]
	public class CanvasItemModelSimple : GLib.Object, Goo.CanvasItemModel {
		public weak string description;
		public weak Goo.CanvasItemModel parent;
		public Goo.CanvasItemSimpleData simple_data;
		public weak string title;
		[NoAccessorMethod]
		public Goo.CairoAntialias antialias { get; set; }
		[NoAccessorMethod]
		public Goo.CairoFillRule clip_fill_rule { get; set; }
		[NoAccessorMethod]
		public string clip_path { set; }
		[NoAccessorMethod]
		public string fill_color { set; }
		[NoAccessorMethod]
		public uint fill_color_rgba { set; }
		[NoAccessorMethod]
		public Goo.CairoPattern fill_pattern { get; set; }
		[NoAccessorMethod]
		public Gdk.Pixbuf fill_pixbuf { set; }
		[NoAccessorMethod]
		public Goo.CairoFillRule fill_rule { get; set; }
		[NoAccessorMethod]
		public string font { owned get; set; }
		[NoAccessorMethod]
		public Pango.FontDescription font_desc { owned get; set; }
		[NoAccessorMethod]
		public Goo.CairoHintMetrics hint_metrics { get; set; }
		[NoAccessorMethod]
		public Goo.CairoLineCap line_cap { get; set; }
		[NoAccessorMethod]
		public Goo.CairoLineDash line_dash { get; set; }
		[NoAccessorMethod]
		public Goo.CairoLineJoin line_join { get; set; }
		[NoAccessorMethod]
		public double line_join_miter_limit { get; set; }
		[NoAccessorMethod]
		public double line_width { get; set; }
		[NoAccessorMethod]
		public Goo.CairoOperator operator { get; set; }
		[NoAccessorMethod]
		public string stroke_color { set; }
		[NoAccessorMethod]
		public uint stroke_color_rgba { set; }
		[NoAccessorMethod]
		public Goo.CairoPattern stroke_pattern { get; set; }
		[NoAccessorMethod]
		public Gdk.Pixbuf stroke_pixbuf { set; }
	}
	[CCode (cheader_filename = "goocanvas.h")]
	public class CanvasItemSimple : GLib.Object, Goo.CanvasItem {
		public Goo.CanvasBounds bounds;
		public weak Goo.Canvas canvas;
		public weak Goo.CanvasItemModelSimple model;
		public uint need_entire_subtree_update;
		public uint need_update;
		public weak Goo.CanvasItem parent;
		public Goo.CanvasItemSimpleData simple_data;
		public void changed (bool recompute_bounds);
		public bool check_in_path (double x, double y, Cairo.Context cr, Goo.CanvasPointerEvents pointer_events);
		public void check_style ();
		public double get_line_width ();
		public void get_path_bounds (Cairo.Context cr, Goo.CanvasBounds bounds);
		public void paint_path (Cairo.Context cr);
		[NoWrapper]
		public virtual void simple_create_path (Cairo.Context cr);
		[NoWrapper]
		public virtual bool simple_is_item_at (double x, double y, Cairo.Context cr, bool is_pointer_event);
		[NoWrapper]
		public virtual void simple_paint (Cairo.Context cr, Goo.CanvasBounds bounds);
		[NoWrapper]
		public virtual void simple_update (Cairo.Context cr);
		public void user_bounds_to_device (Cairo.Context cr, Goo.CanvasBounds bounds);
		public void user_bounds_to_parent (Cairo.Context cr, Goo.CanvasBounds bounds);
		[NoAccessorMethod]
		public Goo.CairoAntialias antialias { get; set; }
		[NoAccessorMethod]
		public Goo.CairoFillRule clip_fill_rule { get; set; }
		[NoAccessorMethod]
		public string clip_path { set; }
		[NoAccessorMethod]
		public string fill_color { set; }
		[NoAccessorMethod]
		public uint fill_color_rgba { set; }
		[NoAccessorMethod]
		public Goo.CairoPattern fill_pattern { get; set; }
		[NoAccessorMethod]
		public Gdk.Pixbuf fill_pixbuf { set; }
		[NoAccessorMethod]
		public Goo.CairoFillRule fill_rule { get; set; }
		[NoAccessorMethod]
		public string font { owned get; set; }
		[NoAccessorMethod]
		public Pango.FontDescription font_desc { owned get; set; }
		[NoAccessorMethod]
		public Goo.CairoHintMetrics hint_metrics { get; set; }
		[NoAccessorMethod]
		public Goo.CairoLineCap line_cap { get; set; }
		[NoAccessorMethod]
		public Goo.CairoLineDash line_dash { get; set; }
		[NoAccessorMethod]
		public Goo.CairoLineJoin line_join { get; set; }
		[NoAccessorMethod]
		public double line_join_miter_limit { get; set; }
		[NoAccessorMethod]
		public double line_width { get; set; }
		[NoAccessorMethod]
		public Goo.CairoOperator operator { get; set; }
		[NoAccessorMethod]
		public string stroke_color { set; }
		[NoAccessorMethod]
		public uint stroke_color_rgba { set; }
		[NoAccessorMethod]
		public Goo.CairoPattern stroke_pattern { get; set; }
		[NoAccessorMethod]
		public Gdk.Pixbuf stroke_pixbuf { set; }
	}
	[Compact]
	[CCode (ref_function = "goo_canvas_line_dash_ref", unref_function = "goo_canvas_line_dash_unref", cheader_filename = "goocanvas.h")]
	public class CanvasLineDash {
		public double dash_offset;
		public double dashes;
		public int num_dashes;
		public int ref_count;
		[CCode (has_construct_function = false)]
		public CanvasLineDash (int num_dashes);
		[CCode (cname = "goo_canvas_line_dash_newv", has_construct_function = false)]
		public CanvasLineDash.newv (int num_dashes, double dashes);
	}
	[CCode (cheader_filename = "goocanvas.h")]
	public class CanvasPath : Goo.CanvasItemSimple, Goo.CanvasItem {
		public Goo.CanvasPathData path_data;
		[CCode (cname = "goo_canvas_path_new")]
		public static unowned Goo.CanvasPath create (Goo.CanvasItem? parent, string path_data, ...);
		[NoAccessorMethod]
		public string data { set; }
	}
	[CCode (cheader_filename = "goocanvas.h")]
	public class CanvasPathModel : Goo.CanvasItemModelSimple, Goo.CanvasItemModel {
		public Goo.CanvasPathData path_data;
		[CCode (cname = "goo_canvas_path_model_new")]
		public static unowned Goo.CanvasPathModel create (Goo.CanvasItemModel? parent, string path_data, ...);
		[NoAccessorMethod]
		public string data { set; }
	}
	[Compact]
	[CCode (ref_function = "goo_canvas_points_ref", unref_function = "goo_canvas_points_unref", type_id = "GOO_TYPE_CANVAS_POINTS", cheader_filename = "goocanvas.h")]
	public class CanvasPoints {
		public double coords;
		public int num_points;
		public int ref_count;
		[CCode (has_construct_function = false)]
		public CanvasPoints (int num_points);
	}
	[CCode (cheader_filename = "goocanvas.h")]
	public class CanvasPolyline : Goo.CanvasItemSimple, Goo.CanvasItem {
		public Goo.CanvasPolylineData polyline_data;
		[CCode (cname = "goo_canvas_polyline_new")]
		public static unowned Goo.CanvasPolyline create (Goo.CanvasItem? parent, bool close_path, int num_points, ...);
		[CCode (cname = "goo_canvas_polyline_new_line")]
		public static unowned Goo.CanvasPolyline create_line (Goo.CanvasItem? parent, double x1, double y1, double x2, double y2, ...);
		[CCode (type = "GooCanvasItem*", has_construct_function = false)]
		public CanvasPolyline.line (Goo.CanvasItem parent, double x1, double y1, double x2, double y2);
		[NoAccessorMethod]
		public double arrow_length { get; set; }
		[NoAccessorMethod]
		public double arrow_tip_length { get; set; }
		[NoAccessorMethod]
		public double arrow_width { get; set; }
		[NoAccessorMethod]
		public bool close_path { get; set; }
		[NoAccessorMethod]
		public bool end_arrow { get; set; }
		[NoAccessorMethod]
		public Goo.CanvasPoints points { owned get; set; }
		[NoAccessorMethod]
		public bool start_arrow { get; set; }
	}
	[CCode (cheader_filename = "goocanvas.h")]
	public class CanvasPolylineModel : Goo.CanvasItemModelSimple, Goo.CanvasItemModel {
		public Goo.CanvasPolylineData polyline_data;
		[CCode (cname = "goo_canvas_polyline_model_new")]
		public static unowned Goo.CanvasPolylineModel create (Goo.CanvasItemModel? parent, bool close_path, int num_points, ...);
		[CCode (cname = "goo_canvas_polyline_model_new_line")]
		public static unowned Goo.CanvasPolylineModel create_line (Goo.CanvasItemModel? parent, double x1, double y1, double x2, double y2, ...);
		[CCode (type = "GooCanvasItemModel*", has_construct_function = false)]
		public CanvasPolylineModel.line (Goo.CanvasItemModel parent, double x1, double y1, double x2, double y2);
		[NoAccessorMethod]
		public double arrow_length { get; set; }
		[NoAccessorMethod]
		public double arrow_tip_length { get; set; }
		[NoAccessorMethod]
		public double arrow_width { get; set; }
		[NoAccessorMethod]
		public bool close_path { get; set; }
		[NoAccessorMethod]
		public bool end_arrow { get; set; }
		[NoAccessorMethod]
		public Goo.CanvasPoints points { owned get; set; }
		[NoAccessorMethod]
		public bool start_arrow { get; set; }
	}
	[CCode (cheader_filename = "goocanvas.h")]
	public class CanvasRect : Goo.CanvasItemSimple, Goo.CanvasItem {
		public Goo.CanvasRectData rect_data;
		[CCode (cname = "goo_canvas_rect_new")]
		public static unowned Goo.CanvasRect create (Goo.CanvasItem? parent, double x, double y, double width, double height, ...);
		[NoAccessorMethod]
		public double height { get; set; }
		[NoAccessorMethod]
		public double radius_x { get; set; }
		[NoAccessorMethod]
		public double radius_y { get; set; }
		[NoAccessorMethod]
		public double width { get; set; }
		[NoAccessorMethod]
		public double x { get; set; }
		[NoAccessorMethod]
		public double y { get; set; }
	}
	[CCode (cheader_filename = "goocanvas.h")]
	public class CanvasRectModel : Goo.CanvasItemModelSimple, Goo.CanvasItemModel {
		public Goo.CanvasRectData rect_data;
		[CCode (cname = "goo_canvas_rect_model_new")]
		public static unowned Goo.CanvasRectModel create (Goo.CanvasItemModel? parent, double x, double y, double width, double height, ...);
		[NoAccessorMethod]
		public double height { get; set; }
		[NoAccessorMethod]
		public double radius_x { get; set; }
		[NoAccessorMethod]
		public double radius_y { get; set; }
		[NoAccessorMethod]
		public double width { get; set; }
		[NoAccessorMethod]
		public double x { get; set; }
		[NoAccessorMethod]
		public double y { get; set; }
	}
	[CCode (cheader_filename = "goocanvas.h")]
	public class CanvasStyle : GLib.Object {
		public weak Goo.CanvasStyle parent;
		public weak GLib.Array properties;
		[CCode (has_construct_function = false)]
		public CanvasStyle ();
		public Goo.CanvasStyle copy ();
		public unowned Goo.CanvasStyle get_parent ();
		public GLib.Value get_property (GLib.Quark property_id);
		public bool set_fill_options (Cairo.Context cr);
		public void set_parent (Goo.CanvasStyle parent);
		public void set_property (GLib.Quark property_id, GLib.Value value);
		public bool set_stroke_options (Cairo.Context cr);
	}
	[CCode (cheader_filename = "goocanvas.h")]
	public class CanvasTable : Goo.CanvasGroup, Goo.CanvasItem {
		public Goo.CanvasTableData table_data;
		[CCode (cname = "goo_canvas_table_new")]
		public static unowned Goo.CanvasTable create (Goo.CanvasItem? parent, ...);
		[NoAccessorMethod]
		public double column_spacing { get; set; }
		[NoAccessorMethod]
		public double height { get; set; }
		[NoAccessorMethod]
		public bool homogeneous_columns { get; set; }
		[NoAccessorMethod]
		public bool homogeneous_rows { get; set; }
		[NoAccessorMethod]
		public double row_spacing { get; set; }
		[NoAccessorMethod]
		public double width { get; set; }
	}
	[CCode (cheader_filename = "goocanvas.h")]
	public class CanvasTableModel : Goo.CanvasGroupModel, Goo.CanvasItemModel {
		public Goo.CanvasTableData table_data;
		[CCode (cname = "goo_canvas_table_model_new")]
		public static unowned Goo.CanvasTableModel create (Goo.CanvasItemModel? parent, ...);
		[NoAccessorMethod]
		public double column_spacing { get; set; }
		[NoAccessorMethod]
		public double height { get; set; }
		[NoAccessorMethod]
		public bool homogeneous_columns { get; set; }
		[NoAccessorMethod]
		public bool homogeneous_rows { get; set; }
		[NoAccessorMethod]
		public double row_spacing { get; set; }
		[NoAccessorMethod]
		public double width { get; set; }
	}
	[CCode (cheader_filename = "goocanvas.h")]
	public class CanvasText : Goo.CanvasItemSimple, Goo.CanvasItem {
		public double layout_width;
		public Goo.CanvasTextData text_data;
		[CCode (cname = "goo_canvas_text_new")]
		public static unowned Goo.CanvasText create (Goo.CanvasItem? parent, string str, double x, double y, double width, Gtk.AnchorType anchor, ...);
		[NoAccessorMethod]
		public Pango.Alignment alignment { get; set; }
		[NoAccessorMethod]
		public Gtk.AnchorType anchor { get; set; }
		[NoAccessorMethod]
		public Pango.EllipsizeMode ellipsize { get; set; }
		[NoAccessorMethod]
		public string text { owned get; set; }
		[NoAccessorMethod]
		public bool use_markup { get; set; }
		[NoAccessorMethod]
		public double width { get; set; }
		[NoAccessorMethod]
		public Pango.WrapMode wrap { get; set; }
		[NoAccessorMethod]
		public double x { get; set; }
		[NoAccessorMethod]
		public double y { get; set; }
	}
	[CCode (cheader_filename = "goocanvas.h")]
	public class CanvasTextModel : Goo.CanvasItemModelSimple, Goo.CanvasItemModel {
		public Goo.CanvasTextData text_data;
		[CCode (cname = "goo_canvas_text_model_new")]
		public static unowned Goo.CanvasTextModel create (Goo.CanvasItemModel? parent, string str, double x, double y, double width, Gtk.AnchorType anchor, ...);
		[NoAccessorMethod]
		public Pango.Alignment alignment { get; set; }
		[NoAccessorMethod]
		public Gtk.AnchorType anchor { get; set; }
		[NoAccessorMethod]
		public Pango.EllipsizeMode ellipsize { get; set; }
		[NoAccessorMethod]
		public string text { owned get; set; }
		[NoAccessorMethod]
		public bool use_markup { get; set; }
		[NoAccessorMethod]
		public double width { get; set; }
		[NoAccessorMethod]
		public Pango.WrapMode wrap { get; set; }
		[NoAccessorMethod]
		public double x { get; set; }
		[NoAccessorMethod]
		public double y { get; set; }
	}
	[CCode (cheader_filename = "goocanvas.h")]
	public class CanvasWidget : Goo.CanvasItemSimple, Goo.CanvasItem {
		[CCode (cname = "goo_canvas_widget_new")]
		public static unowned Goo.CanvasWidget create (Goo.CanvasItem? parent, Gtk.Widget widget, double x, double y, double width, double height, ...);
		[NoAccessorMethod]
		public Gtk.AnchorType anchor { get; set; }
		[NoAccessorMethod]
		public double height { get; set; }
		[NoAccessorMethod]
		public Gtk.Widget widget { owned get; set; }
		[NoAccessorMethod]
		public double width { get; set; }
		[NoAccessorMethod]
		public double x { get; set; }
		[NoAccessorMethod]
		public double y { get; set; }
	}
	[CCode (cheader_filename = "goocanvas.h")]
	public interface CanvasItem : GLib.Object {
		public abstract void add_child (Goo.CanvasItem child, int position);
		public abstract void allocate_area (Cairo.Context cr, Goo.CanvasBounds requested_area, Goo.CanvasBounds allocated_area, double x_offset, double y_offset);
		public void animate (double x, double y, double scale, double degrees, bool absolute, int duration, int step_time, Goo.CanvasAnimateType type);
		public static unowned GLib.ParamSpec class_find_child_property (GLib.ObjectClass iclass, string property_name);
		public static void class_install_child_property (GLib.ObjectClass iclass, uint property_id, GLib.ParamSpec pspec);
		public static unowned GLib.ParamSpec class_list_child_properties (GLib.ObjectClass iclass, uint n_properties);
		public void ensure_updated ();
		public int find_child (Goo.CanvasItem child);
		public abstract void get_bounds (Goo.CanvasBounds bounds);
		public abstract unowned Goo.Canvas get_canvas ();
		public abstract unowned Goo.CanvasItem get_child (int child_num);
		public void get_child_properties (Goo.CanvasItem child);
		public void get_child_properties_valist (Goo.CanvasItem child, void* var_args);
		[NoWrapper]
		public abstract void get_child_property (Goo.CanvasItem child, uint property_id, GLib.Value value, GLib.ParamSpec pspec);
		public abstract unowned GLib.List get_items_at (double x, double y, Cairo.Context cr, bool is_pointer_event, bool parent_is_visible, GLib.List found_items);
		public abstract unowned Goo.CanvasItemModel get_model ();
		public abstract int get_n_children ();
		public abstract unowned Goo.CanvasItem get_parent ();
		public abstract bool get_requested_area (Cairo.Context cr, Goo.CanvasBounds requested_area);
		public abstract double get_requested_height (Cairo.Context cr, double width);
		public void get_simple_transform (out double x, out double y, out double scale, out double rotation);
		public abstract unowned Goo.CanvasStyle get_style ();
		public abstract bool get_transform (Cairo.Matrix transform);
		public abstract bool get_transform_for_child (Goo.CanvasItem child, Cairo.Matrix transform);
		public bool is_container ();
		public abstract bool is_visible ();
		public void lower (Goo.CanvasItem? below);
		public abstract void move_child (int old_position, int new_position);
		public abstract void paint (Cairo.Context cr, Goo.CanvasBounds bounds, double scale);
		[NoWrapper]
		public abstract bool query_tooltip (double x, double y, bool keyboard_tooltip, void* tooltip);
		public void raise (Goo.CanvasItem? above);
		public void remove ();
		public abstract void remove_child (int child_num);
		public abstract void request_update ();
		public void rotate (double degrees, double cx, double cy);
		public void scale (double sx, double sy);
		public abstract void set_canvas (Goo.Canvas canvas);
		public void set_child_properties (Goo.CanvasItem child);
		public void set_child_properties_valist (Goo.CanvasItem child, void* var_args);
		[NoWrapper]
		public abstract void set_child_property (Goo.CanvasItem child, uint property_id, GLib.Value value, GLib.ParamSpec pspec);
		public abstract void set_model (Goo.CanvasItemModel model);
		public abstract void set_parent (Goo.CanvasItem parent);
		public void set_simple_transform (double x, double y, double scale, double rotation);
		public abstract void set_style (Goo.CanvasStyle style);
		public abstract void set_transform (Cairo.Matrix? transform);
		public void skew_x (double degrees, double cx, double cy);
		public void skew_y (double degrees, double cx, double cy);
		public void stop_animation ();
		public void translate (double tx, double ty);
		public abstract void update (bool entire_tree, Cairo.Context cr, Goo.CanvasBounds bounds);
		public bool can_focus { get; set; }
		public string description { get; set; }
		public Goo.CanvasItem parent { get; set; }
		public Goo.CanvasPointerEvents pointer_events { get; set; }
		public string title { get; set; }
		public Goo.CairoMatrix transform { get; set; }
		public Goo.CanvasItemVisibility visibility { get; set; }
		public double visibility_threshold { get; set; }
		public virtual signal bool button_press_event (Goo.CanvasItem target, Gdk.EventButton event);
		public virtual signal bool button_release_event (Goo.CanvasItem target, Gdk.EventButton event);
		public virtual signal void child_notify (GLib.ParamSpec pspec);
		public virtual signal bool enter_notify_event (Goo.CanvasItem target, Gdk.EventCrossing event);
		public virtual signal bool focus_in_event (Goo.CanvasItem target, Gdk.EventFocus event);
		public virtual signal bool focus_out_event (Goo.CanvasItem target, Gdk.EventFocus event);
		public virtual signal bool grab_broken_event (Goo.CanvasItem target, Gdk.EventGrabBroken event);
		public virtual signal bool key_press_event (Goo.CanvasItem target, Gdk.EventKey event);
		public virtual signal bool key_release_event (Goo.CanvasItem target, Gdk.EventKey event);
		public virtual signal bool leave_notify_event (Goo.CanvasItem target, Gdk.EventCrossing event);
		public virtual signal bool motion_notify_event (Goo.CanvasItem target, Gdk.EventMotion event);
	}
	[CCode (cheader_filename = "goocanvas.h")]
	public interface CanvasItemModel : GLib.Object {
		public abstract void add_child (Goo.CanvasItemModel child, int position);
		public void animate (double x, double y, double scale, double degrees, bool absolute, int duration, int step_time, Goo.CanvasAnimateType type);
		public static unowned GLib.ParamSpec class_find_child_property (GLib.ObjectClass mclass, string property_name);
		public static void class_install_child_property (GLib.ObjectClass mclass, uint property_id, GLib.ParamSpec pspec);
		public static unowned GLib.ParamSpec class_list_child_properties (GLib.ObjectClass mclass, uint n_properties);
		[NoWrapper]
		public abstract unowned Goo.CanvasItem create_item (Goo.Canvas canvas);
		public int find_child (Goo.CanvasItemModel child);
		public abstract unowned Goo.CanvasItemModel get_child (int child_num);
		public void get_child_properties (Goo.CanvasItemModel child);
		public void get_child_properties_valist (Goo.CanvasItemModel child, void* var_args);
		[NoWrapper]
		public abstract void get_child_property (Goo.CanvasItemModel child, uint property_id, GLib.Value value, GLib.ParamSpec pspec);
		public abstract int get_n_children ();
		public abstract unowned Goo.CanvasItemModel get_parent ();
		public void get_simple_transform (out double x, out double y, out double scale, out double rotation);
		public abstract unowned Goo.CanvasStyle get_style ();
		public abstract bool get_transform (Cairo.Matrix transform);
		public bool is_container ();
		public void lower (Goo.CanvasItemModel below);
		public abstract void move_child (int old_position, int new_position);
		public void raise (Goo.CanvasItemModel above);
		public void remove ();
		public abstract void remove_child (int child_num);
		public void rotate (double degrees, double cx, double cy);
		public void scale (double sx, double sy);
		public void set_child_properties (Goo.CanvasItemModel child);
		public void set_child_properties_valist (Goo.CanvasItemModel child, void* var_args);
		[NoWrapper]
		public abstract void set_child_property (Goo.CanvasItemModel child, uint property_id, GLib.Value value, GLib.ParamSpec pspec);
		public abstract void set_parent (Goo.CanvasItemModel parent);
		public void set_simple_transform (double x, double y, double scale, double rotation);
		public abstract void set_style (Goo.CanvasStyle style);
		public abstract void set_transform (Cairo.Matrix transform);
		public void skew_x (double degrees, double cx, double cy);
		public void skew_y (double degrees, double cx, double cy);
		public void stop_animation ();
		public void translate (double tx, double ty);
		public bool can_focus { get; set; }
		public string description { get; set; }
		public Goo.CanvasItemModel parent { get; set; }
		public Goo.CanvasPointerEvents pointer_events { get; set; }
		public string title { get; set; }
		public Goo.CairoMatrix transform { get; set; }
		public Goo.CanvasItemVisibility visibility { get; set; }
		public double visibility_threshold { get; set; }
		public virtual signal void changed (bool recompute_bounds);
		public virtual signal void child_added (int child_num);
		public virtual signal void child_moved (int old_child_num, int new_child_num);
		public virtual signal void child_notify (GLib.ParamSpec pspec);
		public virtual signal void child_removed (int child_num);
	}
	[CCode (type_id = "GOO_TYPE_CAIRO_LINE_DASH", cheader_filename = "goocanvas.h")]
	public struct CairoLineDash {
	}
	[CCode (type_id = "GOO_TYPE_CAIRO_PATTERN", cheader_filename = "goocanvas.h")]
	public struct CairoPattern {
	}
	[CCode (type_id = "GOO_TYPE_CANVAS_BOUNDS", cheader_filename = "goocanvas.h")]
	public struct CanvasBounds {
		public double x1;
		public double y1;
		public double x2;
		public double y2;
	}
	[CCode (type_id = "GOO_TYPE_CANVAS_ELLIPSE_DATA", cheader_filename = "goocanvas.h")]
	public struct CanvasEllipseData {
		public double center_x;
		public double center_y;
		public double radius_x;
		public double radius_y;
	}
	[CCode (type_id = "GOO_TYPE_CANVAS_IMAGE_DATA", cheader_filename = "goocanvas.h")]
	public struct CanvasImageData {
		public weak Cairo.Pattern pattern;
		public double x;
		public double y;
		public double width;
		public double height;
	}
	[CCode (type_id = "GOO_TYPE_CANVAS_ITEM_SIMPLE_DATA", cheader_filename = "goocanvas.h")]
	public struct CanvasItemSimpleData {
		public weak Goo.CanvasStyle style;
		public Cairo.Matrix transform;
		public weak GLib.Array clip_path_commands;
		public weak string tooltip;
		public double visibility_threshold;
		public uint visibility;
		public uint pointer_events;
		public uint can_focus;
		public uint own_style;
		public uint clip_fill_rule;
		public uint cache_setting;
		public uint has_tooltip;
	}
	[CCode (type_id = "GOO_TYPE_CANVAS_PATH_COMMAND", cheader_filename = "goocanvas.h")]
	public struct CanvasPathCommand {
		public void* simple;
		public void* curve;
		public void* arc;
	}
	[CCode (type_id = "GOO_TYPE_CANVAS_PATH_DATA", cheader_filename = "goocanvas.h")]
	public struct CanvasPathData {
		public weak GLib.Array path_commands;
	}
	[CCode (type_id = "GOO_TYPE_CANVAS_POLYLINE_ARROW_DATA", cheader_filename = "goocanvas.h")]
	public struct CanvasPolylineArrowData {
		public double arrow_width;
		public double arrow_length;
		public double arrow_tip_length;
		[CCode (array_length = false)]
		public weak double[] line_start;
		[CCode (array_length = false)]
		public weak double[] line_end;
		[CCode (array_length = false)]
		public weak double[] start_arrow_coords;
		[CCode (array_length = false)]
		public weak double[] end_arrow_coords;
	}
	[CCode (type_id = "GOO_TYPE_CANVAS_POLYLINE_DATA", cheader_filename = "goocanvas.h")]
	public struct CanvasPolylineData {
		public double coords;
		public Goo.CanvasPolylineArrowData arrow_data;
		public uint num_points;
		public uint close_path;
		public uint start_arrow;
		public uint end_arrow;
		public uint reconfigure_arrows;
	}
	[CCode (type_id = "GOO_TYPE_CANVAS_RECT_DATA", cheader_filename = "goocanvas.h")]
	public struct CanvasRectData {
		public double x;
		public double y;
		public double width;
		public double height;
		public double radius_x;
		public double radius_y;
	}
	[CCode (type_id = "GOO_TYPE_CANVAS_STYLE_PROPERTY", cheader_filename = "goocanvas.h")]
	public struct CanvasStyleProperty {
		public GLib.Quark id;
		public GLib.Value value;
	}
	[CCode (type_id = "GOO_TYPE_CANVAS_TABLE_DATA", cheader_filename = "goocanvas.h")]
	public struct CanvasTableData {
		public double width;
		public double height;
		[CCode (array_length = false)]
		public weak Goo.CanvasTableDimension[] dimensions;
		public double border_width;
		public weak GLib.Array children;
		public Goo.CanvasTableLayoutData layout_data;
	}
	[CCode (type_id = "GOO_TYPE_CANVAS_TABLE_DIMENSION", cheader_filename = "goocanvas.h")]
	public struct CanvasTableDimension {
		public int size;
		public double default_spacing;
		public double spacings;
		public uint homogeneous;
	}
	[CCode (type_id = "GOO_TYPE_CANVAS_TABLE_LAYOUT_DATA", cheader_filename = "goocanvas.h")]
	public struct CanvasTableLayoutData {
	}
	[CCode (type_id = "GOO_TYPE_CANVAS_TEXT_DATA", cheader_filename = "goocanvas.h")]
	public struct CanvasTextData {
		public weak string text;
		public double x;
		public double y;
		public double width;
		public uint use_markup;
		public uint anchor;
		public uint alignment;
		public uint ellipsize;
		public uint wrap;
	}
	[CCode (cprefix = "CAIRO_ANTIALIAS_", has_type_id = "0", cheader_filename = "goocanvas.h")]
	public enum CairoAntialias {
		DEFAULT,
		NONE,
		GRAY,
		SUBPIXEL
	}
	[CCode (cprefix = "CAIRO_FILL_RULE_", has_type_id = "0", cheader_filename = "goocanvas.h")]
	public enum CairoFillRule {
		WINDING,
		EVEN_ODD
	}
	[CCode (cprefix = "CAIRO_HINT_METRICS_", has_type_id = "0", cheader_filename = "goocanvas.h")]
	public enum CairoHintMetrics {
		DEFAULT,
		OFF,
		ON
	}
	[CCode (cprefix = "CAIRO_LINE_CAP_", has_type_id = "0", cheader_filename = "goocanvas.h")]
	public enum CairoLineCap {
		BUTT,
		ROUND,
		SQUARE
	}
	[CCode (cprefix = "CAIRO_LINE_JOIN_", has_type_id = "0", cheader_filename = "goocanvas.h")]
	public enum CairoLineJoin {
		MITER,
		ROUND,
		BEVEL
	}
	[CCode (cprefix = "CAIRO_OPERATOR_", has_type_id = "0", cheader_filename = "goocanvas.h")]
	public enum CairoOperator {
		CLEAR,
		SOURCE,
		OVER,
		IN,
		OUT,
		ATOP,
		DEST,
		DEST_OVER,
		DEST_IN,
		DEST_OUT,
		DEST_ATOP,
		XOR,
		ADD,
		SATURATE
	}
	[CCode (cprefix = "GOO_CANVAS_ANIMATE_", has_type_id = "0", cheader_filename = "goocanvas.h")]
	public enum CanvasAnimateType {
		FREEZE,
		RESET,
		RESTART,
		BOUNCE
	}
	[CCode (cprefix = "GOO_CANVAS_ITEM_", has_type_id = "0", cheader_filename = "goocanvas.h")]
	public enum CanvasItemVisibility {
		HIDDEN,
		INVISIBLE,
		VISIBLE,
		VISIBLE_ABOVE_THRESHOLD
	}
	[CCode (cprefix = "GOO_CANVAS_PATH_", has_type_id = "0", cheader_filename = "goocanvas.h")]
	public enum CanvasPathCommandType {
		MOVE_TO,
		CLOSE_PATH,
		LINE_TO,
		HORIZONTAL_LINE_TO,
		VERTICAL_LINE_TO,
		CURVE_TO,
		SMOOTH_CURVE_TO,
		QUADRATIC_CURVE_TO,
		SMOOTH_QUADRATIC_CURVE_TO,
		ELLIPTICAL_ARC
	}
	[CCode (cprefix = "GOO_CANVAS_EVENTS_", has_type_id = "0", cheader_filename = "goocanvas.h")]
	[Flags]
	public enum CanvasPointerEvents {
		VISIBLE_MASK,
		PAINTED_MASK,
		FILL_MASK,
		STROKE_MASK,
		NONE,
		VISIBLE_PAINTED,
		VISIBLE_FILL,
		VISIBLE_STROKE,
		VISIBLE,
		PAINTED,
		FILL,
		STROKE,
		ALL
	}
	[CCode (cheader_filename = "goocanvas.h")]
	public const int NUM_ARROW_POINTS;
}
