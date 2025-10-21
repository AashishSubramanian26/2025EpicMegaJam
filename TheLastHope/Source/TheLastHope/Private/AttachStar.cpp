// Fill out your copyright notice in the Description page of Project Settings.


#include "AttachStar.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
// Sets default values

AAttachStar::AAttachStar()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Root
	USceneComponent* Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	SetRootComponent(Root);

	//Visual Mesh
	StarMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StarMesh"));
	StarMesh->SetupAttachment(RootComponent);
	StarMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	//Grapple Box
	GrappleBox = CreateDefaultSubobject<UBoxComponent>(TEXT("GrappleBox"));
	GrappleBox->SetupAttachment(StarMesh);
	GrappleBox->InitBoxExtent(FVector(40.f, 40.f, 40.f));
	GrappleBox->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	GrappleBox->SetCollisionObjectType(ECC_WorldStatic);
	GrappleBox->SetCollisionResponseToAllChannels(ECR_Ignore);
	GrappleBox->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);

}

// Called when the game starts or when spawned
void AAttachStar::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAttachStar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

