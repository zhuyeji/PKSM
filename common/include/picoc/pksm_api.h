/*
*   This file is part of PKSM
*   Copyright (C) 2016-2019 Bernardo Giordano, Admiral Fish, piepie62
*
*   This program is free software: you can redistribute it and/or modify
*   it under the terms of the GNU General Public License as published by
*   the Free Software Foundation, either version 3 of the License, or
*   (at your option) any later version.
*
*   This program is distributed in the hope that it will be useful,
*   but WITHOUT ANY WARRANTY; without even the implied warranty of
*   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*   GNU General Public License for more details.
*
*   You should have received a copy of the GNU General Public License
*   along with this program.  If not, see <http://www.gnu.org/licenses/>.
*
*   Additional Terms 7.b and 7.c of GPLv3 apply to this file:
*       * Requiring preservation of specified reasonable legal notices or
*         author attributions in that material or in the Appropriate Legal
*         Notices displayed by works containing it.
*       * Prohibiting misrepresentation of the origin of that material,
*         or requiring that modified versions of such material be marked in
*         reasonable ways as different from the original version.
*/

#ifndef PKSM_API_H
#define PKSM_API_H

#include "picoc.h"
#include "3ds/types.h"

#define PKSM_PORT 34567

enum PKX_FIELD {
    OT_NAME,
    TID,
    SID,
    SHINY,
    LANGUAGE,
    MET_LOCATION,
    MOVE,
    BALL,
    LEVEL,
    GENDER,
    ABILITY,
    IV_HP,
    IV_ATK,
    IV_DEF,
    IV_SPATK,
    IV_SPDEF,
    IV_SPEED,
    NICKNAME,
    ITEM,
    POKERUS,
    EGG_DAY,
    EGG_MONTH,
    EGG_YEAR,
    MET_DAY,
    MET_MONTH,
    MET_YEAR,
    MAX_FIELD
};

void bank_inject_pkx(struct ParseState*, struct Value*, struct Value**, int);
void cfg_default_ot(struct ParseState*, struct Value*, struct Value**, int);
void cfg_default_tid(struct ParseState*, struct Value*, struct Value**, int);
void cfg_default_sid(struct ParseState*, struct Value*, struct Value**, int);
void cfg_default_day(struct ParseState*, struct Value*, struct Value**, int);
void cfg_default_month(struct ParseState*, struct Value*, struct Value**, int);
void cfg_default_year(struct ParseState*, struct Value*, struct Value**, int);
void gui_warn(struct ParseState*, struct Value*, struct Value**, int);
void gui_choice(struct ParseState*, struct Value*, struct Value**, int);
void gui_menu6x5(struct ParseState*, struct Value*, struct Value**, int);
void gui_menu20x2(struct ParseState*, struct Value*, struct Value**, int);
void gui_keyboard(struct ParseState*, struct Value*, struct Value**, int);
void gui_numpad(struct ParseState*, struct Value*, struct Value**, int);
void gui_boxes(struct ParseState*, struct Value*, struct Value**, int);
void net_ip(struct ParseState*, struct Value*, struct Value**, int);
void net_tcp_receiver(struct ParseState*, struct Value*, struct Value**, int);
void net_tcp_sender(struct ParseState*, struct Value*, struct Value**, int);
void net_udp_receiver(struct ParseState*, struct Value*, struct Value**, int);
void party_get_pkx(struct ParseState*, struct Value*, struct Value**, int);
void party_inject_pkx(struct ParseState*, struct Value*, struct Value**, int);
void sav_sbo(struct ParseState*, struct Value*, struct Value**, int);
void sav_gbo(struct ParseState*, struct Value*, struct Value**, int);
void sav_boxEncrypt(struct ParseState*, struct Value*, struct Value**, int);
void sav_boxDecrypt(struct ParseState*, struct Value*, struct Value**, int);
void sav_get_pkx(struct ParseState*, struct Value*, struct Value**, int);
void sav_inject_pkx(struct ParseState*, struct Value*, struct Value**, int);
void sav_get_sid(struct ParseState*, struct Value*, struct Value**, int);
void sav_get_tid(struct ParseState*, struct Value*, struct Value**, int);
void sav_get_ot_name(struct ParseState*, struct Value*, struct Value**, int);
void current_directory(struct ParseState*, struct Value*, struct Value**, int);
void read_directory(struct ParseState*, struct Value*, struct Value**, int);
void i18n_species(struct ParseState*, struct Value*, struct Value**, int);
void pkx_decrypt(struct ParseState*, struct Value*, struct Value**, int);
void pkx_encrypt(struct ParseState*, struct Value*, struct Value**, int);
void pkx_box_size(struct ParseState*, struct Value*, struct Value**, int);
void pkx_party_size(struct ParseState*, struct Value*, struct Value**, int);
void pkx_generate(struct ParseState*, struct Value*, struct Value**, int);
void pkx_is_valid(struct ParseState*, struct Value*, struct Value**, int);
void pkx_set_value(struct ParseState*, struct Value*, struct Value**, int);
// PKSM prefix to prevent name hiding
void pksm_utf8_to_utf16(struct ParseState*, struct Value*, struct Value**, int);
void pksm_utf16_to_utf8(struct ParseState*, struct Value*, struct Value**, int);

#endif
