/*
 * This file is part of the AzerothCore Project. See AUTHORS file for Copyright information
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Affero General Public License as published by the
 * Free Software Foundation; either version 3 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU Affero General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#include "InstanceMapScript.h"
#include "InstanceScript.h"
#include "Map.h"
#include "auchenai_crypts.h"

class instance_auchenai_crypts : public InstanceMapScript
{
public:
    instance_auchenai_crypts() : InstanceMapScript(ACScriptName, MAP_AUCHINDOUN_AUCHENAI_CRYPTS) { }

    struct instance_auchenai_crypts_InstanceMapScript : public InstanceScript
    {
        instance_auchenai_crypts_InstanceMapScript(Map* map) : InstanceScript(map)
        {
            SetHeaders(DataHeader);
            SetBossNumber(EncounterCount);
        }
    };

    InstanceScript* GetInstanceScript(InstanceMap* map) const override
    {
        return new instance_auchenai_crypts_InstanceMapScript(map);
    }
};

void AddSC_instance_auchenai_crypts()
{
    new instance_auchenai_crypts();
}
