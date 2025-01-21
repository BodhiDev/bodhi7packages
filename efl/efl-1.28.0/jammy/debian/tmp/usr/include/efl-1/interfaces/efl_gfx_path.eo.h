#ifndef _EFL_GFX_PATH_EO_H_
#define _EFL_GFX_PATH_EO_H_

#ifndef _EFL_GFX_PATH_EO_CLASS_TYPE
#define _EFL_GFX_PATH_EO_CLASS_TYPE

typedef Eo Efl_Gfx_Path;

#endif

#ifndef _EFL_GFX_PATH_EO_TYPES
#define _EFL_GFX_PATH_EO_TYPES


#endif
#ifdef EFL_BETA_API_SUPPORT
/** EFL graphics path object interface
 *
 * @ingroup Efl_Gfx_Path
 */
#define EFL_GFX_PATH_MIXIN efl_gfx_path_mixin_get()

EAPI EAPI_WEAK const Efl_Class *efl_gfx_path_mixin_get(void) EINA_CONST;

/**
 * @brief Set the list of commands and points to be used to create the content
 * of path.
 *
 * @param[in] obj The object.
 * @param[in] op Command list
 * @param[in] points Point list
 *
 * @ingroup Efl_Gfx_Path
 */
EAPI EAPI_WEAK void efl_gfx_path_set(Eo *obj, const Efl_Gfx_Path_Command_Type *op, const double *points);

/**
 * @brief Set the list of commands and points to be used to create the content
 * of path.
 *
 * @param[in] obj The object.
 * @param[out] op Command list
 * @param[out] points Point list
 *
 * @ingroup Efl_Gfx_Path
 */
EAPI EAPI_WEAK void efl_gfx_path_get(const Eo *obj, const Efl_Gfx_Path_Command_Type **op, const double **points);

/**
 * @brief Path length property
 *
 * @param[in] obj The object.
 * @param[out] commands Commands
 * @param[out] points Points
 *
 * @ingroup Efl_Gfx_Path
 */
EAPI EAPI_WEAK void efl_gfx_path_length_get(const Eo *obj, unsigned int *commands, unsigned int *points);

/**
 * @brief Current point coordinates
 *
 * @param[in] obj The object.
 * @param[out] x X co-ordinate of the current point.
 * @param[out] y Y co-ordinate of the current point.
 *
 * @ingroup Efl_Gfx_Path
 */
EAPI EAPI_WEAK void efl_gfx_path_current_get(const Eo *obj, double *x, double *y);

/**
 * @brief Current control point coordinates
 *
 * @param[in] obj The object.
 * @param[out] x X co-ordinate of control point.
 * @param[out] y Y co-ordinate of control point.
 *
 * @ingroup Efl_Gfx_Path
 */
EAPI EAPI_WEAK void efl_gfx_path_current_ctrl_get(const Eo *obj, double *x, double *y);

/**
 * @brief Copy the path data from the object specified.
 *
 * @param[in] obj The object.
 * @param[in] dup_from Shape object from where data will be copied.
 *
 * @ingroup Efl_Gfx_Path
 */
EAPI EAPI_WEAK void efl_gfx_path_copy_from(Eo *obj, const Efl_Object *dup_from);

/**
 * @brief Compute and return the bounding box of the currently set path
 *
 * @param[in] obj The object.
 * @param[out] r Contain the bounding box of the currently set path
 *
 * @ingroup Efl_Gfx_Path
 */
EAPI EAPI_WEAK void efl_gfx_path_bounds_get(const Eo *obj, Eina_Rect *r);

/** Reset the path data of the path object.
 *
 * @ingroup Efl_Gfx_Path
 */
EAPI EAPI_WEAK void efl_gfx_path_reset(Eo *obj);

/**
 * @brief Moves the current point to the given point,  implicitly starting a
 * new subpath and closing the previous one.
 *
 * See also @ref efl_gfx_path_append_close.
 *
 * @param[in] obj The object.
 * @param[in] x X co-ordinate of the current point.
 * @param[in] y Y co-ordinate of the current point.
 *
 * @ingroup Efl_Gfx_Path
 */
EAPI EAPI_WEAK void efl_gfx_path_append_move_to(Eo *obj, double x, double y);

/**
 * @brief Adds a straight line from the current position to the given end
 * point. After the line is drawn, the current position is updated to be at the
 * end point of the line.
 *
 * If no current position present, it draws a line to itself, basically a
 * point.
 *
 * See also @ref efl_gfx_path_append_move_to.
 *
 * @param[in] obj The object.
 * @param[in] x X co-ordinate of end point of the line.
 * @param[in] y Y co-ordinate of end point of the line.
 *
 * @ingroup Efl_Gfx_Path
 */
EAPI EAPI_WEAK void efl_gfx_path_append_line_to(Eo *obj, double x, double y);

/**
 * @brief Adds a quadratic Bezier curve between the current position and the
 * given end point (x,y) using the control points specified by (ctrl_x,
 * ctrl_y). After the path is drawn, the current position is updated to be at
 * the end point of the path.
 *
 * @param[in] obj The object.
 * @param[in] x X co-ordinate of end point of the line.
 * @param[in] y Y co-ordinate of end point of the line.
 * @param[in] ctrl_x X co-ordinate of control point.
 * @param[in] ctrl_y Y co-ordinate of control point.
 *
 * @ingroup Efl_Gfx_Path
 */
EAPI EAPI_WEAK void efl_gfx_path_append_quadratic_to(Eo *obj, double x, double y, double ctrl_x, double ctrl_y);

/**
 * @brief Same as @ref efl_gfx_path_append_quadratic_to api only difference is
 * that it uses the current control point to draw the bezier.
 *
 * @param[in] obj The object.
 * @param[in] x X co-ordinate of end point of the line.
 * @param[in] y Y co-ordinate of end point of the line.
 *
 * @ingroup Efl_Gfx_Path
 */
EAPI EAPI_WEAK void efl_gfx_path_append_squadratic_to(Eo *obj, double x, double y);

/**
 * @brief Adds a cubic Bezier curve between the current position and the given
 * end point (x,y) using the control points specified by (ctrl_x0, ctrl_y0),
 * and (ctrl_x1, ctrl_y1). After the path is drawn, the current position is
 * updated to be at the end point of the path.
 *
 * @param[in] obj The object.
 * @param[in] ctrl_x0 X co-ordinate of 1st control point.
 * @param[in] ctrl_y0 Y co-ordinate of 1st control point.
 * @param[in] ctrl_x1 X co-ordinate of 2nd control point.
 * @param[in] ctrl_y1 Y co-ordinate of 2nd control point.
 * @param[in] x X co-ordinate of end point of the line.
 * @param[in] y Y co-ordinate of end point of the line.
 *
 * @ingroup Efl_Gfx_Path
 */
EAPI EAPI_WEAK void efl_gfx_path_append_cubic_to(Eo *obj, double ctrl_x0, double ctrl_y0, double ctrl_x1, double ctrl_y1, double x, double y);

/**
 * @brief Same as @ref efl_gfx_path_append_cubic_to api only difference is that
 * it uses the current control point to draw the bezier.
 *
 * @param[in] obj The object.
 * @param[in] x X co-ordinate of end point of the line.
 * @param[in] y Y co-ordinate of end point of the line.
 * @param[in] ctrl_x X co-ordinate of 2nd control point.
 * @param[in] ctrl_y Y co-ordinate of 2nd control point.
 *
 * @ingroup Efl_Gfx_Path
 */
EAPI EAPI_WEAK void efl_gfx_path_append_scubic_to(Eo *obj, double x, double y, double ctrl_x, double ctrl_y);

/**
 * @brief Append an arc that connects from the current point int the point list
 * to the given point (x,y). The arc is defined by the given radius in
 *  x-direction (rx) and radius in y direction (ry).
 *
 * Use this api if you know the end point's of the arc otherwise use more
 * convenient function @ref efl_gfx_path_append_arc.
 *
 * @param[in] obj The object.
 * @param[in] x X co-ordinate of end point of the arc.
 * @param[in] y Y co-ordinate of end point of the arc.
 * @param[in] rx Radius of arc in x direction.
 * @param[in] ry Radius of arc in y direction.
 * @param[in] angle X-axis rotation , normally 0.
 * @param[in] large_arc Defines whether to draw the larger arc or smaller arc
 * joining two point.
 * @param[in] sweep Defines whether the arc will be drawn counter-clockwise or
 * clockwise from current point to the end point taking into account the
 * large_arc property.
 *
 * @ingroup Efl_Gfx_Path
 */
EAPI EAPI_WEAK void efl_gfx_path_append_arc_to(Eo *obj, double x, double y, double rx, double ry, double angle, Eina_Bool large_arc, Eina_Bool sweep);

/**
 * @brief Append an arc that enclosed in the given rectangle (x, y, w, h). The
 * angle is defined in counter clock wise , use -ve angle for clockwise arc.
 *
 * @param[in] obj The object.
 * @param[in] x X co-ordinate of the rect.
 * @param[in] y Y co-ordinate of the rect.
 * @param[in] w Width of the rect.
 * @param[in] h Height of the rect.
 * @param[in] start_angle Angle at which the arc will start
 * @param[in] sweep_length @ Length of the arc.
 *
 * @ingroup Efl_Gfx_Path
 */
EAPI EAPI_WEAK void efl_gfx_path_append_arc(Eo *obj, double x, double y, double w, double h, double start_angle, double sweep_length);

/**
 * @brief Closes the current subpath by drawing a line to the beginning of the
 * subpath, automatically starting a new path. The current point of the new
 * path is (0, 0).
 *
 * If the subpath does not contain any points, this function does nothing.
 * @param[in] obj The object.
 *
 * @ingroup Efl_Gfx_Path
 */
EAPI EAPI_WEAK void efl_gfx_path_append_close(Eo *obj);

/**
 * @brief Append a circle with given center and radius.
 *
 * @param[in] obj The object.
 * @param[in] x X co-ordinate of the center of the circle.
 * @param[in] y Y co-ordinate of the center of the circle.
 * @param[in] radius Radius of the circle.
 *
 * @ingroup Efl_Gfx_Path
 */
EAPI EAPI_WEAK void efl_gfx_path_append_circle(Eo *obj, double x, double y, double radius);

/**
 * @brief Append the given rectangle with rounded corner to the path.
 *
 * The xr and yr arguments specify the radii of the ellipses defining the
 * corners of the rounded rectangle.
 *
 * xr and yr are specified in terms of width and height respectively.
 *
 * If xr and yr are 0, then it will draw a rectangle without rounded corner.
 *
 * @param[in] obj The object.
 * @param[in] x X co-ordinate of the rectangle.
 * @param[in] y Y co-ordinate of the rectangle.
 * @param[in] w Width of the rectangle.
 * @param[in] h Height of the rectangle.
 * @param[in] rx The x radius of the rounded corner and should be in range [ 0
 * to w/2 ]
 * @param[in] ry The y radius of the rounded corner and should be in range [ 0
 * to h/2 ]
 *
 * @ingroup Efl_Gfx_Path
 */
EAPI EAPI_WEAK void efl_gfx_path_append_rect(Eo *obj, double x, double y, double w, double h, double rx, double ry);

/**
 * @brief Append SVG path data
 *
 * @param[in] obj The object.
 * @param[in] svg_path_data SVG path data to append
 *
 * @ingroup Efl_Gfx_Path
 */
EAPI EAPI_WEAK void efl_gfx_path_append_svg_path(Eo *obj, const char *svg_path_data);

/**
 * @brief Creates intermediary path part-way between two paths
 *
 * Sets the points of the @c obj as the linear interpolation of the points in
 * the @c from and @c to paths.  The path's x,y position and control point
 * coordinates are likewise interpolated.
 *
 * The @c from and @c to paths must not already have equivalent points, and
 * @c to must contain at least as many points as @c from, else the function
 * returns @c false with no interpolation performed.  If @c to has more points
 * than @c from, the excess points are ignored.
 *
 * @param[in] obj The object.
 * @param[in] from Source path
 * @param[in] to Destination path
 * @param[in] pos_map Position map in range 0.0 to 1.0
 *
 * @return @c true on success, @c false otherwise
 *
 * @ingroup Efl_Gfx_Path
 */
EAPI EAPI_WEAK Eina_Bool efl_gfx_path_interpolate(Eo *obj, const Efl_Object *from, const Efl_Object *to, double pos_map);

/**
 * @brief Equal commands in object
 *
 * @param[in] obj The object.
 * @param[in] with Object
 *
 * @return True on success, @c false otherwise
 *
 * @ingroup Efl_Gfx_Path
 */
EAPI EAPI_WEAK Eina_Bool efl_gfx_path_equal_commands(Eo *obj, const Efl_Object *with);

/**
 * @brief Reserve path commands buffer in advance. If you know the count of
 * path commands coming, you can reserve commands buffer in advance to avoid
 * buffer growing job.
 *
 * @param[in] obj The object.
 * @param[in] cmd_count Commands count to reserve
 * @param[in] pts_count Pointers count to reserve
 *
 * @ingroup Efl_Gfx_Path
 */
EAPI EAPI_WEAK void efl_gfx_path_reserve(Eo *obj, unsigned int cmd_count, unsigned int pts_count);

/**
 * @brief Request to update the path object.
 *
 * One path object may get appending several path calls (such as append_cubic,
 * append_rect, etc) to construct the final path data. Here commit means all
 * path data is prepared and now object could update its own internal status
 * based on the last path information.
 * @param[in] obj The object.
 *
 * @ingroup Efl_Gfx_Path
 */
EAPI EAPI_WEAK void efl_gfx_path_commit(Eo *obj);
#endif /* EFL_BETA_API_SUPPORT */

#endif
