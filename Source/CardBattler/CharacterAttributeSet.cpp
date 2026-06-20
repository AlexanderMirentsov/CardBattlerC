// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterAttributeSet.h"
#include "Net/UnrealNetwork.h"

UCharacterAttributeSet::UCharacterAttributeSet() {}

void UCharacterAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME_CONDITION_NOTIFY(UCharacterAttributeSet, HealthPoints, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UCharacterAttributeSet, ManaPoints, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UCharacterAttributeSet, ActionPoints, COND_None, REPNOTIFY_Always);
}

void UCharacterAttributeSet::OnRep_HealthPoints(const FGameplayAttributeData& OldHealthPoints)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UCharacterAttributeSet, HealthPoints, OldHealthPoints);
}

void UCharacterAttributeSet::OnRep_ManaPoints(const FGameplayAttributeData& OldManaPoints)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UCharacterAttributeSet, ManaPoints, OldManaPoints);
}

void UCharacterAttributeSet::OnRep_ActionPoints(const FGameplayAttributeData& OldActionPoints)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UCharacterAttributeSet, ActionPoints, OldActionPoints);
}