/*
 * GStreamer Daemon - Gst Launch under steroids
 * Copyright (c) 2019 Ridgerun, LLC (http://www.ridgerun.com)
 * 
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more dergrtails.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA
 */

#ifndef __GSTD_CALLBACK_H__
#define __GSTD_CALLBACK_H__

#include <glib-object.h>

#include "gstd_object.h"

G_BEGIN_DECLS
/*
 * Type declaration.
 */
#define GSTD_TYPE_CALLBACK \
  (gstd_callback_get_type())
#define GSTD_CALLBACK(obj) \
  (G_TYPE_CHECK_INSTANCE_CAST((obj),GSTD_TYPE_CALLBACK,GstdCallback))
#define GSTD_CALLBACK_CLASS(klass) \
  (G_TYPE_CHECK_CLASS_CAST((klass),GSTD_TYPE_CALLBACK,GstdCallbackClass))
#define GSTD_IS_CALLBACK(obj) \
  (G_TYPE_CHECK_INSTANCE_TYPE((obj),GSTD_TYPE_CALLBACK))
#define GSTD_IS_CALLBACK_CLASS(klass) \
  (G_TYPE_CHECK_CLASS_TYPE((klass),GSTD_TYPE_CALLBACK))
#define GSTD_CALLBACK_GET_CLASS(obj) \
  (G_TYPE_INSTANCE_GET_CLASS ((obj), GSTD_TYPE_CALLBACK, GstdCallbackClass))
typedef struct _GstdCallback GstdCallback;
typedef struct _GstdCallbackClass GstdCallbackClass;
GType gstd_callback_get_type (void);

struct _GstdCallback
{
  GstdObject parent;

  gchar *signal_name;
  GValue *param_values;
  guint n_params;
};

struct _GstdCallbackClass
{
  GstdObjectClass parent_class;
};


GstdCallback *gstd_callback_new (const gchar * signal_name,
    GValue * return_value, guint n_param_values, const GValue * param_values);

G_END_DECLS
#endif // __GSTD_CALLBACK_H__
