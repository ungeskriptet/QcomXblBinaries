INF QcomPkg/XBLCore/XBLCore.inf

FILE FREEFORM = DDE58710-41CD-4306-DBFB-3FA90BB1D2DD {
    SECTION UI = "uefiplat.cfg"
    SECTION RAW = RawFiles/uefiplat.cfg
}

INF MdeModulePkg/Universal/Variable/EmuRuntimeDxe/EmuVariableRuntimeDxe.inf
INF MdeModulePkg/Core/Dxe/DxeMain.inf
INF ArmPkg/Drivers/CpuDxe/CpuDxe.inf
INF MdeModulePkg/Core/RuntimeDxe/RuntimeDxe.inf
INF QcomPkg/Drivers/SecurityDxe/SecurityDxe.inf
INF QcomPkg/Drivers/TzDxe/TzDxe.inf
INF MdeModulePkg/Universal/WatchdogTimerDxe/WatchdogTimer.inf
INF QcomPkg/Drivers/CapsuleRuntimeDxe/CapsuleRuntimeDxe.inf
INF QcomPkg/Drivers/EmbeddedMonotonicCounter/EmbeddedMonotonicCounter.inf
INF QcomPkg/Drivers/SimpleTextInOutSerialDxe/SimpleTextInOutSerial.inf
INF QcomPkg/Drivers/ResetRuntimeDxe/ResetRuntimeDxe.inf
INF EmbeddedPkg/RealTimeClockRuntimeDxe/RealTimeClockRuntimeDxe.inf
INF EmbeddedPkg/MetronomeDxe/MetronomeDxe.inf
INF MdeModulePkg/Universal/PrintDxe/PrintDxe.inf
INF MdeModulePkg/Universal/DevicePathDxe/DevicePathDxe.inf
INF MdeModulePkg/Universal/Console/ConPlatformDxe/ConPlatformDxe.inf
INF MdeModulePkg/Universal/Console/ConSplitterDxe/ConSplitterDxe.inf
INF MdeModulePkg/Universal/Console/GraphicsConsoleDxe/GraphicsConsoleDxe.inf
INF MdeModulePkg/Universal/HiiDatabaseDxe/HiiDatabaseDxe.inf
INF QcomPkg/Drivers/EnvDxe/EnvDxe.inf
INF ArmPkg/Drivers/ArmGic/ArmGicDxe.inf
INF ArmPkg/Drivers/TimerDxe/TimerDxe.inf
INF QcomPkg/Drivers/ChipInfoDxe/ChipInfoDxe.inf
INF QcomPkg/Drivers/GLinkDxe/GLinkDxe.inf
INF QcomPkg/Drivers/SmemDxe/SmemDxe.inf
INF QcomPkg/Drivers/ULogDxe/ULogDxe.inf
INF QcomPkg/Drivers/NpaDxe/NpaDxe.inf
INF QcomPkg/Drivers/DiskIoDxe/DiskIoDxe.inf
INF QcomPkg/Drivers/PartitionDxe/PartitionDxe.inf
INF FatPkg/EnhancedFatDxe/Fat.inf
INF MdeModulePkg/Universal/Disk/UnicodeCollation/EnglishDxe/EnglishDxe.inf
INF QcomPkg/Drivers/DALSYSDxe/DALSYSDxe.inf
INF QcomPkg/Drivers/ClockDxe/ClockDxe.inf
INF QcomPkg/Drivers/HWIODxe/HWIODxe.inf
INF QcomPkg/Drivers/I2CDxe/I2CDxe.inf
INF QcomPkg/Drivers/SPMIDxe/SPMIDxe.inf
INF QcomPkg/Drivers/SdccDxe/SdccDxe.inf
INF QcomPkg/Drivers/UFSDxe/UFSDxe.inf
INF QcomPkg/Drivers/TLMMDxe/TLMMDxe.inf
INF QcomPkg/Drivers/DisplayDxe/DisplayDxe.inf
INF QcomPkg/Drivers/PlatformInfoDxe/PlatformInfoDxe.inf
INF QcomPkg/Drivers/ButtonsDxe/ButtonsDxe.inf
INF QcomPkg/Drivers/PmicDxe/PmicDxe.inf
INF QcomPkg/Drivers/AdcDxe/AdcDxe.inf
INF QcomPkg/Drivers/TsensDxe/TsensDxe.inf
INF QcomPkg/Drivers/UsbfnDwc3Dxe/UsbfnDwc3Dxe.inf
INF QcomPkg/Drivers/UsbBusDxe/UsbBusDxe.inf
INF QcomPkg/Drivers/UsbMsdDxe/UsbMsdDxe.inf
INF QcomPkg/Drivers/UsbDeviceDxe/UsbDeviceDxe.inf
INF QcomPkg/Drivers/UsbConfigDxe/UsbConfigDxe.inf
INF QcomPkg/Drivers/PcieDxe/PciBusDxe.inf
INF QcomPkg/Drivers/HashDxe/HashDxe.inf
INF QcomPkg/Drivers/RNGDxe/RngDxe.inf
INF QcomPkg/Drivers/QcomBds/QcomBds.inf
INF QcomPkg/Application/Pgm/Pgm.inf
INF QcomPkg/Application/CmdApp/CmdApp.inf
INF QcomPkg/Application/MenuApp/MenuApp.inf
INF QcomPkg/Application/RPMBErase/RPMBErase.inf
INF QcomPkg/Application/RPMBProvision/RPMBProvision.inf
INF QcomPkg/Application/UsbfnMsdApp/UsbfnMsdApp.inf
INF QcomPkg/Application/FastbootApp/FastbootApp.inf

FILE FREEFORM = A91D838E-A5FA-4138-825D-455E2303079E {
    SECTION UI = "BDS_Menu.cfg"
    SECTION RAW = RawFiles/BDS_Menu.cfg
}


FILE FREEFORM = A91D838E-A5FA-4138-825D-455E23030790 {
    SECTION UI = "USB_Menu.cfg"
    SECTION RAW = RawFiles/USB_Menu.cfg
}


FILE FREEFORM = A91D838E-A5FA-4138-825D-455E23030791 {
    SECTION UI = "Uefi_Menu.cfg"
    SECTION RAW = RawFiles/Uefi_Menu.cfg
}


FILE FREEFORM = A91D838E-A5FA-4138-825D-455E23030792 {
    SECTION UI = "Pmic_Menu.cfg"
    SECTION RAW = RawFiles/Pmic_Menu.cfg
}


FILE FREEFORM = A91D838E-A5FA-4138-825D-455E23030793 {
    SECTION UI = "Config_Menu.cfg"
    SECTION RAW = RawFiles/Config_Menu.cfg
}

INF EmbeddedPkg/Ebl/Ebl.inf

FILE FREEFORM = A1E235DE-E825-4591-9623-C43175811826 {
    SECTION UI = "SecParti.cfg"
    SECTION RAW = RawFiles/SecParti.cfg
}


FILE FREEFORM = 45FE4B7C-150C-45DA-A021-4BEB2048EC6F {
    SECTION UI = "PmicChargerApp.cfg"
    SECTION RAW = RawFiles/PmicChargerApp.cfg
}


FILE FREEFORM = 3E5584ED-05D4-4267-9048-0D47F76F4248 {
    SECTION UI = "battery_symbol_Soc10.bmp"
    SECTION RAW = RawFiles/battery_symbol_Soc10.bmp
}


FILE FREEFORM = 21D7756C-ABCE-4CA9-88B6-8515EAB40595 {
    SECTION UI = "battery_symbol_Soc25.bmp"
    SECTION RAW = RawFiles/battery_symbol_Soc25.bmp
}


FILE FREEFORM = 203962DD-A7F3-462B-A006-8956ECBAAB57 {
    SECTION UI = "battery_symbol_Soc50.bmp"
    SECTION RAW = RawFiles/battery_symbol_Soc50.bmp
}


FILE FREEFORM = 47B43C60-ECED-4874-B8BC-CDCD154E73B6 {
    SECTION UI = "battery_symbol_Soc75.bmp"
    SECTION RAW = RawFiles/battery_symbol_Soc75.bmp
}


FILE FREEFORM = C5D3FB9A-1FE9-4E2B-868E-ED553EBB9897 {
    SECTION UI = "battery_symbol_Soc100.bmp"
    SECTION RAW = RawFiles/battery_symbol_Soc100.bmp
}


FILE FREEFORM = 7207EA78-5000-4D8E-9071-FE8C86783367 {
    SECTION UI = "battery_symbol_LowBattery.bmp"
    SECTION RAW = RawFiles/battery_symbol_LowBattery.bmp
}


FILE FREEFORM = 4753E815-DDD8-402D-BF69-9B8C4EB7573E {
    SECTION UI = "battery_symbol_NoBattery.bmp"
    SECTION RAW = RawFiles/battery_symbol_NoBattery.bmp
}


FILE FREEFORM = 03DED53E-BECD-428F-9F79-5ABA64C58445 {
    SECTION UI = "battery_symbol_Nocharger.bmp"
    SECTION RAW = RawFiles/battery_symbol_Nocharger.bmp
}


FILE FREEFORM = 8B86CD38-C772-4FCF-85AA-345B2B3C1AB4 {
    SECTION UI = "battery_symbol_LowBatteryCharging.bmp"
    SECTION RAW = RawFiles/battery_symbol_LowBatteryCharging.bmp
}

