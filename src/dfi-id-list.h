/*
 * Copyright © 2013 Canonical Limited
 *
 * update-desktop-database is free software; you can redistribute it
 * and/or modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) any later version.
 *
 * update-desktop-database is distributed in the hope that it will be
 * useful, but WITHOUT ANY WARRANTY; without even the implied warranty
 * of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with update-desktop-database; see the file COPYING.  If not,
 * write to the Free Software Foundation, Inc., 59 Temple Place - Suite
 * 330, Boston, MA 02111-1307, USA.
 *
 * Author: Ryan Lortie <desrt@desrt.ca>
 */

#ifndef __dfi_id_list_h__
#define __dfi_id_list_h__

#include <glib.h>

typedef GArray DfiIdList;

DfiIdList *             dfi_id_list_new                                 (void);

void                    dfi_id_list_free                                (gpointer       id_list);

void                    dfi_id_list_add_ids                             (DfiIdList     *id_list,
                                                                         const guint16 *ids,
                                                                         gint           n_ids);

const guint16 *         dfi_id_list_get_ids                             (DfiIdList      *id_list,
                                                                         guint          *n_ids);
#endif /* __dfi_id_list_h__ */
