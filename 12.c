[00:00.720 -> 00:05.720]  Hey guys, today I'll be taking a look at Linux Apps Manager.
[00:05.720 -> 00:09.600]  On their GitHub, they say that it's a shell script that will help us manage apps that
[00:09.600 -> 00:15.320]  are installed via ACT, Pacman, DNF, DEP and even snaps and flatpaks.
[00:15.320 -> 00:18.760]  They even included functionality to manage NVIDIA drivers.
[00:18.760 -> 00:21.000]  Anyway, let's try it out.
[00:21.000 -> 00:24.320]  Let's clone the repo and CD into it.
[00:24.320 -> 00:25.000]  Ok. Let's try it out. Let's clone the repo and CD into it.
[00:25.000 -> 00:32.360]  Okay, let's ls.
[00:32.360 -> 00:36.700]  Now run the script.
[00:36.700 -> 00:47.000]  That font is a bit tiny. Let's increase it and relaunch the app.
[00:50.280 -> 00:52.200]  That's better.
[00:52.200 -> 00:59.200]  So let's install first.
[00:59.460 -> 01:03.300]  I'm guessing it will put the script in my path.
[01:03.300 -> 01:05.840]  I'll just run it and choose pacman because
[01:05.840 -> 01:14.500]  I'm using Arch Linux. I'll try listing out the packages and there you go, all my installed
[01:14.500 -> 01:25.000]  packages are listed. This is easier than remembering and running the pacman command. Even user apps can be exclusively listed.
[01:27.000 -> 01:30.000]  Let's check out option 8 firmware.
[01:32.000 -> 01:34.000]  I'll try checking for updates.
[01:38.000 -> 01:40.000]  Ah, so it will use FWU PD Manager. Fine, let's just say yes.
[01:40.000 -> 01:55.960]  Okay, let's download and install firmware updates.
[01:55.960 -> 02:00.320]  It's being mean to me because I'm using BIOS instead of UEFI.
[02:00.320 -> 02:03.100]  If I had a UEFI system I could try it.
[02:03.100 -> 02:09.560]  But I don't so let's move on.
[02:09.560 -> 02:20.640]  Let's try Nvidia.
[02:20.640 -> 02:25.500]  So if you had an Nvidia system it would set up Nvidia DKMS and Nvidia utils.
[02:25.500 -> 02:28.000]  That's sort of nice.
[02:28.000 -> 02:34.580]  If you run window managers, you usually don't have a quick way to install and update drivers.
[02:34.580 -> 02:37.240]  If I click update does it run a pacman SYU?
[02:37.240 -> 02:39.320]  Oh it does.
[02:39.320 -> 02:46.940]  It's checking all the different package managers though, that seems inefficient. Let's check Flatpak,
[02:46.940 -> 02:55.820]  i.e. those demon spawns that no one wants to deal with. I don't have Flatpak
[02:55.820 -> 03:18.380]  installed but I guess they can install it for me right? Fine it installed it now let's try searching for a flat pack
[03:22.400 -> 03:24.400]  There maybe
[03:26.120 -> 03:30.600]  Okay guys, so it's been 10 minutes and it's still stuck.
[03:30.600 -> 03:34.060]  Could be that I didn't add the flatback ripple.
[03:34.060 -> 03:36.820]  I don't really know.
[03:36.820 -> 03:40.260]  Let's just install it the easy way.
[03:40.260 -> 03:46.600]  Let's just go to flathub and search for them.
[03:48.400 -> 03:53.900]  Copying this and pasting it here.
[04:20.660 -> 04:21.160]  And install. Sorry guys, but after wasting 15 minutes of my life waiting for it to install, I just gave up.
[04:27.280 -> 04:30.840]  Flathub for some reason is incredibly slow. It did install some dependencies, so I think I can list them at using the Linux Apps Manager.
[04:30.840 -> 04:32.240]  There you go.
[04:32.240 -> 04:35.220]  It works fine.
[04:35.220 -> 04:37.840]  All in all, it's a beautiful shell script
[04:37.840 -> 04:40.380]  that makes it easy to manage apps using your package
[04:40.380 -> 04:42.160]  manager and children of the devil known
[04:42.160 -> 04:44.180]  as Snap and Flatbacks.
[04:44.180 -> 04:48.620]  I personally don't need something like this, but I guess some people would prefer the convenience
[04:48.620 -> 04:49.340]  and style.
[04:49.980 -> 04:55.120]  It does look nice, and it would definitely be a thousand times better than a GUI application
[04:55.120 -> 04:56.900]  manager that would be very bloated.
[04:57.520 -> 04:59.060]  Careful if you're using it, though.
[04:59.740 -> 05:01.680]  Only use it if you're an advanced user.
[05:03.340 -> 05:06.180]  Anyway, bye guys, see you in the next one.
[05:07.860 -> 05:10.420]  Fuck, it's updating the flatbacks.
