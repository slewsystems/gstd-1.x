/*
 * GStreamer Daemon - Gst Launch under steroids
 * Copyright (c) 2015-2017 Ridgerun, LLC (http://www.ridgerun.com)
 * 
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA
 */

#ifndef __GSTD_BUS_MSG_ELEMENT_H__
#define __GSTD_BUS_MSG_ELEMENT_H__

#include <glib-object.h>

G_BEGIN_DECLS

/*
 * Type declaration.
 */
#define GSTD_TYPE_BUS_MSG_ELEMENT \
  (gstd_bus_msg_element_get_type())
#define GSTD_BUS_MSG_ELEMENT(obj) \
  (G_TYPE_CHECK_INSTANCE_CAST((obj),GSTD_TYPE_BUS_MSG_ELEMENT,GstdBusMsgElement))
#define GSTD_BUS_MSG_ELEMENT_CLASS(klass) \
  (G_TYPE_CHECK_CLASS_CAST((klass),GSTD_TYPE_BUS_MSG_ELEMENT,GstdBusMsgElementClass))
#define GSTD_IS_BUS_MSG_ELEMENT(obj) \
  (G_TYPE_CHECK_INSTANCE_TYPE((obj),GSTD_TYPE_BUS_MSG_ELEMENT))
#define GSTD_IS_BUS_MSG_ELEMENT_CLASS(klass) \
  (G_TYPE_CHECK_CLASS_TYPE((klass),GSTD_TYPE_BUS_MSG_ELEMENT))
#define GSTD_BUS_MSG_ELEMENT_GET_CLASS(obj) \
  (G_TYPE_INSTANCE_GET_CLASS ((obj), GSTD_TYPE_BUS_MSG_ELEMENT, GstdBusMsgElementClass))

typedef struct _GstdBusMsgElement GstdBusMsgElement;
typedef struct _GstdBusMsgElementClass GstdBusMsgElementClass;
GType gstd_bus_msg_element_get_type (void);

G_END_DECLS

#endif // __GSTD_BUS_MSG_ELEMENT_H__
