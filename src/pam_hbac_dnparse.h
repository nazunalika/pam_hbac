/*
    Copyright (C) 2016 Jakub Hrozek <jakub.hrozek@posteo.se>

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation; either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef __PAM_HBAC_DNPARSE_H__
#define __PAM_HBAC_DNPARSE_H__

enum member_el_type {
    DN_TYPE_USER,
    DN_TYPE_HOST,
    DN_TYPE_SVC,
};

int ph_group_name_from_dn(const char *dn,
                          enum member_el_type el_type,
                          const char *basedn,
                          const char **_group_name);

int ph_name_from_dn(const char *dn,
                    enum member_el_type el_type,
                    const char *basedn,
                    const char **_name);

const char *ph_member_el_type2str(const enum member_el_type el_type);

#endif /* __PAM_HBAC_DNPARSE_H__ */
