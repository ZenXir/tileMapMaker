// Fill out your copyright notice in the Description page of Project Settings.

#include "OpenMenuUserWidget.h"

void UOpenMenuUserWidget :: reloadFloderPath(FString FloderPath)
{
	TArray<FString> foundFiles;

	//���Ŀ���ļ��в�����
	if (!IFileManager::Get().DirectoryExists(*FloderPath))
	{

	}
}

bool UOpenMenuUserWidget::checkDirectoryExists(FString FloderPath)
{
	return IFileManager::Get().DirectoryExists(*FloderPath);
}

TArray<FString> UOpenMenuUserWidget::getFile(FString FloderPath, FString extension)
{
	TArray<FString> files;
	IFileManager::Get().FindFiles(files, *FloderPath, *extension);
	return files;
}


