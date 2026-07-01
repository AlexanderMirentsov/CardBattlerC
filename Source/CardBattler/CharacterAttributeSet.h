// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "CharacterAttributeSet.generated.h"

#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)
/**
 * 
 */
UCLASS()
class CARDBATTLER_API UCharacterAttributeSet : public UAttributeSet
{
	GENERATED_BODY()
	
public:
	UCharacterAttributeSet();

	UPROPERTY(BlueprintReadOnly, Category = "Attributes", ReplicatedUsing = OnRep_HealthPoints)
	FGameplayAttributeData HealthPoints;
	ATTRIBUTE_ACCESSORS(UCharacterAttributeSet, HealthPoints)

	UFUNCTION()
	virtual void OnRep_HealthPoints(const FGameplayAttributeData& OldHealthPoints);


	UPROPERTY(BlueprintReadOnly, Category = "Attributes", ReplicatedUsing = OnRep_ManaPoints)
	FGameplayAttributeData ManaPoints;
	ATTRIBUTE_ACCESSORS(UCharacterAttributeSet, ManaPoints)

	UFUNCTION()
	virtual void OnRep_ManaPoints(const FGameplayAttributeData& OldManaPoints);

	UPROPERTY(BlueprintReadOnly, Category = "Attributes", ReplicatedUsing = OnRep_ActionPoints)
	FGameplayAttributeData ActionPoints;
	ATTRIBUTE_ACCESSORS(UCharacterAttributeSet, ActionPoints)

	UFUNCTION()
	virtual void OnRep_ActionPoints(const FGameplayAttributeData& OldActionPoints);

	UPROPERTY(BlueprintReadOnly, Category = "Attributes", ReplicatedUsing = OnRep_MaxHealthPoints)
	FGameplayAttributeData MaxHealthPoints;
	ATTRIBUTE_ACCESSORS(UCharacterAttributeSet, MaxHealthPoints)

	UFUNCTION()
	virtual void OnRep_MaxHealthPoints(const FGameplayAttributeData& OldMaxHealthPoints);

	UPROPERTY(BlueprintReadOnly, Category = "Attributes", ReplicatedUsing = OnRep_MaxManaPoints)
	FGameplayAttributeData MaxManaPoints;
	ATTRIBUTE_ACCESSORS(UCharacterAttributeSet, MaxManaPoints)

	UFUNCTION()
	virtual void OnRep_MaxManaPoints(const FGameplayAttributeData& OldMaxManaPoints);

	UPROPERTY(BlueprintReadOnly, Category = "Attributes", ReplicatedUsing = OnRep_MaxActionPoints)
	FGameplayAttributeData MaxActionPoints;
	ATTRIBUTE_ACCESSORS(UCharacterAttributeSet, MaxActionPoints)

	UFUNCTION()
	virtual void OnRep_MaxActionPoints(const FGameplayAttributeData& OldMaxActionPoints);

	// Обязательная функция для мультиплеера
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
};
