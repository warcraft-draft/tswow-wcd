#pragma once

#include "TSLua.h"
#include "TSUnit.h"
#include "TSWorldObjectLua.h"

template <typename T>
void TSLua::load_unit_methods_t(sol::state & state, sol::usertype<T> & target, std::string const& name)
{
    load_world_object_methods_t<T>(state, target, name);
    LUA_FIELD(target, TSUnit, Attack);
    LUA_FIELD(target, TSUnit, AttackStop);
    LUA_FIELD(target, TSUnit, IsStandState);
    LUA_FIELD(target, TSUnit, IsMounted);
    LUA_FIELD(target, TSUnit, IsRooted);
    LUA_FIELD(target, TSUnit, IsFullHealth);
    LUA_FIELD(target, TSUnit, IsInAccessiblePlaceFor);
    LUA_FIELD(target, TSUnit, IsAuctioneer);
    LUA_FIELD(target, TSUnit, IsGuildMaster);
    LUA_FIELD(target, TSUnit, IsInnkeeper);
    LUA_FIELD(target, TSUnit, IsTrainer);
    LUA_FIELD(target, TSUnit, IsGossip);
    LUA_FIELD(target, TSUnit, IsTaxi);
    LUA_FIELD(target, TSUnit, IsSpiritHealer);
    LUA_FIELD(target, TSUnit, IsSpiritGuide);
    LUA_FIELD(target, TSUnit, IsTabardDesigner);
    LUA_FIELD(target, TSUnit, IsServiceProvider);
    LUA_FIELD(target, TSUnit, IsSpiritService);
    LUA_FIELD(target, TSUnit, IsAlive);
    LUA_FIELD(target, TSUnit, IsDead);
    LUA_FIELD(target, TSUnit, IsDying);
    LUA_FIELD(target, TSUnit, IsBanker);
    LUA_FIELD(target, TSUnit, IsVendor);
    LUA_FIELD(target, TSUnit, IsBattleMaster);
    LUA_FIELD(target, TSUnit, IsCharmed);
    LUA_FIELD(target, TSUnit, IsArmorer);
    LUA_FIELD(target, TSUnit, IsAttackingPlayer);
    LUA_FIELD(target, TSUnit, IsPvPFlagged);
    LUA_FIELD(target, TSUnit, IsOnVehicle);
    LUA_FIELD(target, TSUnit, IsInCombat);
    LUA_FIELD(target, TSUnit, IsUnderWater);
    LUA_FIELD(target, TSUnit, IsInWater);
    LUA_FIELD(target, TSUnit, IsStopped);
    LUA_FIELD(target, TSUnit, IsQuestGiver);
    LUA_FIELD(target, TSUnit, HealthBelowPct);
    LUA_FIELD(target, TSUnit, HealthAbovePct);
    LUA_FIELD(target, TSUnit, HasAura);
    LUA_FIELD(target, TSUnit, HasAuraType);
    LUA_FIELD(target, TSUnit, IsCasting);
    LUA_FIELD(target, TSUnit, HasUnitState);
    LUA_FIELD(target, TSUnit, GetOwner);
    LUA_FIELD(target, TSUnit, GetOwnerGUID);
    LUA_FIELD(target, TSUnit, GetMountID);
    LUA_FIELD(target, TSUnit, GetCreatorGUID);
    LUA_FIELD(target, TSUnit, GetCharmerGUID);
    LUA_FIELD(target, TSUnit, GetCharmGUID);
    LUA_FIELD(target, TSUnit, GetPetGUID);
    LUA_FIELD(target, TSUnit, GetPet);
    LUA_FIELD(target, TSUnit, GetController);
    LUA_FIELD(target, TSUnit, GetControllerGUID);
    LUA_FIELD(target, TSUnit, GetControllerGUIDS);
    LUA_FIELD(target, TSUnit, GetStat);
    LUA_FIELD(target, TSUnit, GetBaseSpellPower);
    LUA_FIELD(target, TSUnit, GetVictim);
    LUA_FIELD(target, TSUnit, GetCurrentSpell);
    LUA_FIELD(target, TSUnit, GetStandState);
    LUA_FIELD(target, TSUnit, GetDisplayID);
    LUA_FIELD(target, TSUnit, GetNativeDisplayID);
    LUA_FIELD(target, TSUnit, GetLevel);
    LUA_FIELD(target, TSUnit, GetHealth);
    LUA_FIELD(target, TSUnit, PowerSelectorHelper);
    LUA_FIELD(target, TSUnit, GetPower);
    LUA_FIELD(target, TSUnit, GetMaxPower);
    LUA_FIELD(target, TSUnit, GetPowerPct);
    LUA_FIELD(target, TSUnit, GetGender);
    LUA_FIELD(target, TSUnit, GetRace);
    LUA_FIELD(target, TSUnit, GetClass);
    LUA_FIELD(target, TSUnit, GetRaceMask);
    LUA_FIELD(target, TSUnit, GetClassMask);
    LUA_FIELD(target, TSUnit, GetCreatureType);
    LUA_FIELD(target, TSUnit, GetClassAsString);
    LUA_FIELD(target, TSUnit, GetRaceAsString);
    LUA_FIELD(target, TSUnit, GetFaction);
    LUA_FIELD(target, TSUnit, GetAura);
    LUA_FIELD(target, TSUnit, GetFriendlyUnitsInRange);
    LUA_FIELD(target, TSUnit, GetUnfriendlyUnitsInRange);
    LUA_FIELD(target, TSUnit, GetVehicleKit);
    LUA_FIELD(target, TSUnit, GetVehicle);
    LUA_FIELD(target, TSUnit, GetCritterGUID);
    LUA_FIELD(target, TSUnit, GetSpeed);
    LUA_FIELD(target, TSUnit, GetMovementType);
    LUA_FIELD(target, TSUnit, SetOwnerGUID);
    LUA_FIELD(target, TSUnit, SetPvP);
    LUA_FIELD(target, TSUnit, SetSheath);
    LUA_FIELD(target, TSUnit, SetName);
    LUA_FIELD(target, TSUnit, SetSpeed);
    LUA_FIELD(target, TSUnit, SetFaction);
    LUA_FIELD(target, TSUnit, SetLevel);
    LUA_FIELD(target, TSUnit, SetHealth);
    LUA_FIELD(target, TSUnit, SetMaxHealth);
    LUA_FIELD(target, TSUnit, SetPower);
    LUA_FIELD(target, TSUnit, ModifyPower);
    LUA_FIELD(target, TSUnit, SetMaxPower);
    LUA_FIELD(target, TSUnit, SetPowerType);
    LUA_FIELD(target, TSUnit, SetDisplayID);
    LUA_FIELD(target, TSUnit, SetNativeDisplayID);
    LUA_FIELD(target, TSUnit, SetFacing);
    LUA_FIELD(target, TSUnit, SetFacingToObject);
    LUA_FIELD(target, TSUnit, SetCreatorGUID);
    LUA_FIELD(target, TSUnit, SetPetGUID);
    LUA_FIELD(target, TSUnit, SetWaterWalk);
    LUA_FIELD(target, TSUnit, SetStandState);
    LUA_FIELD(target, TSUnit, SetFFA);
    LUA_FIELD(target, TSUnit, SetSanctuary);
    LUA_FIELD(target, TSUnit, SetCritterGUID);
    LUA_FIELD(target, TSUnit, SetRooted);
    LUA_FIELD(target, TSUnit, SetConfused);
    LUA_FIELD(target, TSUnit, SetFeared);
    LUA_FIELD(target, TSUnit, ClearThreatList);
    LUA_FIELD(target, TSUnit, Mount);
    LUA_FIELD(target, TSUnit, Dismount);
    LUA_FIELD(target, TSUnit, PerformEmote);
    LUA_FIELD(target, TSUnit, EmoteState);
    LUA_FIELD(target, TSUnit, CountPctFromCurHealth);
    LUA_FIELD(target, TSUnit, CountPctFromMaxHealth);
    LUA_FIELD(target, TSUnit, SendChatMessageToPlayer);
    LUA_FIELD(target, TSUnit, MoveStop);
    LUA_FIELD(target, TSUnit, MoveExpire);
    LUA_FIELD(target, TSUnit, MoveClear);
    LUA_FIELD(target, TSUnit, MoveIdle);
    LUA_FIELD(target, TSUnit, MoveRandom);
    LUA_FIELD(target, TSUnit, MoveHome);
    LUA_FIELD(target, TSUnit, MoveFollow);
    LUA_FIELD(target, TSUnit, MoveChase);
    LUA_FIELD(target, TSUnit, MoveConfused);
    LUA_FIELD(target, TSUnit, MoveFleeing);
    LUA_FIELD(target, TSUnit, MoveTo);
    LUA_FIELD(target, TSUnit, MoveTakeoff);
    LUA_FIELD(target, TSUnit, MoveLand);
    LUA_FIELD(target, TSUnit, MoveJump);
    LUA_FIELD(target, TSUnit, SendUnitWhisper);
    LUA_FIELD(target, TSUnit, SendUnitEmote);
    LUA_FIELD(target, TSUnit, SendUnitSay);
    LUA_FIELD(target, TSUnit, SendUnitYell);
    LUA_FIELD(target, TSUnit, DeMorph);
    LUA_FIELD(target, TSUnit, CastCustomSpell);
    LUA_FIELD(target, TSUnit, ClearInCombat);
    LUA_FIELD(target, TSUnit, StopSpellCast);
    LUA_FIELD(target, TSUnit, InterruptSpell);
    LUA_FIELD(target, TSUnit, AddAura);
    LUA_FIELD(target, TSUnit, RemoveAura);
    LUA_FIELD(target, TSUnit, RemoveAllAuras);
    LUA_FIELD(target, TSUnit, AddUnitState);
    LUA_FIELD(target, TSUnit, ClearUnitState);
    LUA_FIELD(target, TSUnit, NearTeleport);
    LUA_FIELD(target, TSUnit, DealDamage);
    LUA_FIELD(target, TSUnit, DealHeal);
    LUA_FIELD(target, TSUnit, Kill);
    LUA_FIELD(target, TSUnit, AddThreat);
    LUA_FIELD(target, TSUnit, ScaleThreat);
    LUA_FIELD(target, TSUnit, GetResistance);
    LUA_FIELD(target, TSUnit, GetArmor);
    LUA_FIELD(target, TSUnit, SetResistance);
    LUA_FIELD(target, TSUnit, SetArmor);
    LUA_FIELD(target, TSUnit, RemoveAllControlled);
    LUA_FIELD(target, TSUnit, GetFirstControlled);
    LUA_FIELD(target, TSUnit, RemoveAllMinionsByEntry);
    LUA_FIELD(target, TSUnit, RemoveCharmedBy);
    LUA_FIELD(target, TSUnit, SetCharm);
    target.set_function("SetCharmedBy", sol::overload(&TSUnit::LSetCharmedBy0, &TSUnit::LSetCharmedBy1));
    target.set_function("GetControlled", &TSUnit::LGetControlled);
    LUA_FIELD(target, TSUnit, KnockbackFrom);
    target.set_function("Jump", sol::overload(
        &TSUnit::LJump0,
        &TSUnit::LJump1
    ));
    target.set_function("JumpTo", sol::overload(
        &TSUnit::LJumpTo0,
        &TSUnit::LJumpTo1,
        &TSUnit::LJumpTo2,
        &TSUnit::LJumpTo3
    ));
}
