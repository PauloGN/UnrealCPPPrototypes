// Fill out your copyright notice in the Description page of Project Settings.


#include "MyObject.h"

UMyObject::UMyObject()
{
	_myFloat = 0.0f;
}

void UMyObject::FloatFunction()
{
	_myFloat = 10;

	UE_LOG(LogTemp, Warning, TEXT("Warning from UMYOBJECT Classs"));
}