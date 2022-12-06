#ifndef GO
#error Nope
#endif

GO("libc.so.6", libc)
GO("libc.musl-x86_64.so.1", libdl)
GO("libpthread.so.0", libpthread)
GO("librt.so.1", librt)
GO("libEGL.so.1", libegl)
GO("libGL.so.1", libgl)
GO("libGL.so", libgl)
GO("libOpenGL.so.0", libgl)
GO("libGLU.so.1", libglu)
GO("libX11.so.6", libx11)
GO("libasound.so.2", libasound)
GO("libdl.so.2", libdl)
GO("libm.so.6", libm)
GO("libSDL2-2.0.so.0", sdl2)
GO("libSDL2-2.0.so.1", sdl2)
GO("libSDL2.so", sdl2)
GO("libsdl2-2.0.so.0", sdl2)
GO("libSDL2_mixer-2.0.so.0", sdl2mixer)
GO("libSDL2_image-2.0.so.0", sdl2image)
GO("libSDL2_image.so", sdl2image)
GO("libSDL2_net-2.0.so.0", sdl2net)
GO("libSDL2_ttf-2.0.so.0", sdl2ttf)
GO("libSDL2_ttf.so", sdl2ttf)
GO("libSDL-1.2.so.0", sdl1)
GO("libSDL_image-1.2.so.0", sdl1image)
GO("libSDL_mixer-1.2.so.0", sdl1mixer)
GO("libSDL_net-1.2.so.0", sdl1net)
GO("libSDL_sound-1.0.so.1", sdl1sound)
GO("libSDL_ttf-2.0.so.0", sdl1ttf)
GO("libsmpeg-0.4.so.0", smpeg)
GO("libsmpeg2-2.0.so.0", smpeg2)
GO("libvorbisfile.so.3", vorbisfile)
GO("libvorbis.so.0", libvorbis)
GO("libogg.so.0", libogg)
GO("libFLAC.so.8", flac)
//GO("libpng12.so.0", png12)
GO("libpng16.so.16", png16)
GO("libXxf86vm.so.1", libxxf86vm)
GO("libXinerama.so.1", xinerama)
GO("libXrandr.so.2", libxrandr)
GO("libXext.so.6", libxext)
GO("libXfixes.so.3", libxfixes)
GO("libXcursor.so.1", libxcursor)
GO("libXrender.so.1", libxrender)
GO("libXft.so.2", libxft)
GO("libXi.so.6", libxi)
GO("libXss.so.1", libxss)
GO("libXpm.so.4", libxpm)
GO("libXau.so.6", libxau)
GO("libXdmcp.so.6", libxdmcp)
GO("libX11-xcb.so.1", libx11xcb)
GO("libxcb.so.1", libxcb)
GO("libxcb-xfixes.so.0", libxcbxfixes)
GO("libxcb-shape.so.0", libxcbshape)
GO("libxcb-shm.so.0", libxcbshm)
GO("libxcb-randr.so.0", libxcbrandr)
GO("libxcb-image.so.0", libxcbimage)
GO("libxcb-keysyms.so.1", libxcbkeysyms)
GO("libxcb-xtest.so.0", libxcbxtest)
GO("libxcb-glx.so.0", libxcbglx)
GO("libxcb-dri2.so.0", libxcbdri2)
GO("libxcb-dri3.so.0", libxcbdri3)
GO("libxcb-icccm.so.4", libxcbicccm)
//GO("libxcb-present.so.0", libxcbpresent)
GO("libXtst.so.6", libxtst)
GO("libXt.so.6", libxt)
GO("libXcomposite.so.1", libxcomposite)
GO("libXdamage.so.1", libxdamage)
GO("libXpresent.so.1", libxpresent)
GO("libXmu.so.6", libxmu)
GO("libxkbcommon.so.0", xkbcommon)
GO("libxkbcommon-x11.so.0", xkbcommonx11)
GO("libz.so.1", libz)
GO("libopenal.so.1", openal)
GO("libopenal.so.0", openal)
GO("libopenal.so", openal)
GO("openal.so", openal)
GO("libalut.so.0", alut)
GO("libalure.so.1", alure)
//GO("libjpeg.so.8", libjpeg)
//GO("libjpeg.so.62", libjpeg62)
//GO("libturbojpeg.so.0", turbojpeg)
GO("libcurl.so.4", curl)
GO("libcurl-gnutls.so.4", curl)
GO("libcurl.so.3", curl)
GO("libudev.so.0", udev0)
GO("libudev.so.1", udev1)
GO("libudev.so", udev1)
GO("libdbus-1.so.3", dbus)
//GO("libiconv.so.2", iconv)
GO("libdrm.so.2", libdrm)
GO("libexpat.so.1", expat)
GO("libexpat.so", expat)
GO("libcrypto.so.1", crypto)
GO("libssl.so.1", libssl)
GO("libcrypt.so.1", libcrypt)
GO("libgcrypt.so.20", gcrypt)
GO("libutil.so.1", util)
GO("libuuid.so.1", libuuid)
GO("libresolv.so.2", libresolv)
GO("libpulse-simple.so.0", pulsesimple)
GO("libpulse.so.0", pulse)
GO("libsndfile.so.1", libsndfile)
GO("libgtk-x11-2.0.so.0", gtkx112)
GO("libgdk-x11-2.0.so.0", gdkx112)
GO("libgtk-3.so.0", gtk3)
GO("libgdk-3.so.0", gdk3)
GO("libgdk_pixbuf-2.0.so.0", gdkpixbuf2)
GO("libgconf-2.so.4", gconf2)
GO("libgio-2.0.so.0", gio2)
GO("libgmodule-2.0.so.0", gmodule2)
GO("libnotify.so.4", notify)
GO("libgobject-2.0.so.0", gobject2)
GO("libglib-2.0.so.0", glib2)
GO("libgthread-2.0.so.0", gthread2)
//GO("libgstreamer-0.10.so.0", gstreamer010)
//GO("libgstinterfaces-0.10.so.0", gstinterfaces010)
//GO("libdbusmenu-gtk.so.4", dbusmenugtk)
//GO("libdbusmenu-glib.so.4", dbusmenuglib)
GO("libdbus-glib-1.so.2", dbusglib1)
//GO("libgudev-1.0.so.0", gudev1)
//GO("libappindicator.so.1", appindicator)
GO("libatk-1.0.so.0", atk)
GO("libatk-bridge-2.0.so.0", atkbridge)
GO("libatspi.so.0", atspi)
GO("libpangoft2-1.0.so", pangoft2)
GO("libpangoft2-1.0.so.0", pangoft2)
GO("libpangocairo-1.0.so.0", pangocairo)
GO("libcairo.so.2", cairo)
GO("libcairo.so", cairo)
GO("libcairo-gobject.so.2", cairogobject)
GO("libpango-1.0.so.0", pango)
GO("libpango-1.0.so", pango)
//GO("libnm.so.0", libnm)
//GO("libnm-glib.so.4", libnm)
//GO("libnm-util.so.2", libnm)
GO("libfontconfig.so.1", fontconfig)
GO("libfreetype.so.6", freetype)
GO("libbz2.so.1", bz2)
GO("liblzma.so.5", lzma)
GO("libSM.so.6", libsm)
GO("libICE.so.6", libice)
GO("libusb-1.0.so.0", libusb1)
GO("libncursesw.so.5", libncursesw)
GO("libncursesw.so.6", libncursesw6)
GO("libform.so.5", libform)
GO("libformw.so.5", libformw)
GO("libncurses.so.5", libncurses)
GO("libtinfo.so.5", libtinfo)
GO("libpanel.so.5", libpanel)
GO("libncurses.so.6", libncurses6)
GO("libtinfo.so.6", libtinfo6)
GO("libtbbmalloc_proxy.so.2", tbbmallocproxy)
GO("libtcmalloc_minimal.so.0", tcmallocminimal)
GO("libtcmalloc_minimal.so.4", tcmallocminimal)
GO("libmpg123.so.0", mpg123)
GO("libgnutls.so.30", gnutls)
GO("libpcre.so.3", libpcre)
GO("libcups.so.2", libcups)
//GO("d3dadapter9.so.1", d3dadapter9)
GO("libvulkan.so.1", vulkan)
GO("libvulkan.so", vulkan)
//GO("libwayland-client.so.0", waylandclient)
GO("libgbm.so.1", gbm)
GO("libxml2.so.2", xml2)
GO("libxslt.so.1", xslt)
GO("libldap_r-2.4.so.2", ldapr)
GO("liblber-2.4.so.2", lber)
//GO("libnsl.so.1", nsl)
//GO("liblcms2.so.2", lcms2)
GO("libkrb5.so.3", krb5)
GO("libgssapi_krb5.so.2", gssapikrb5)
GO("libgssapi.so.3", gssapi)
//GO("libtiff.so.5", libtiff)
GO("libfuse.so.2", libfuse)
GO("libnss3.so", nss3)
GO("libnssutil3.so", nssutil3)
GO("libsmime3.so", smime3)
GO("libnspr4.so", nspr4)
GO("libplds4.so", plds4)
GO("libplc4.so", plc4)
GO("libssl3.so", ssl3)
GO("libfreebl3.so", freebl3)
GO("libnsl.so.1", nsl)
GO("libselinux.so.1", selinux)
GO("libsecret-1.so.0", secret1)
GO("libpci.so.3", libpci)
GO("libgmp.so.10", gmp)
GO("libFAudio.so.0", faudio)
GO("libgstapp-1.0.so.0", gstapp)
GO("libgstaudio-1.0.so.0", gstaudio)
GO("libgstbase-1.0.so.0", gstbase)
GO("libgstgl-1.0.so.0", gstgl)
GO("libgstreamer-1.0.so.0", gstreamer)
GO("libgsttag-1.0.so.0", gsttag)
GO("libgstvideo-1.0.so.0", gstvideo)
GO("libxshmfence.so.1", xshmfence)
GO("libatomic.so.1", atomic)
GO("libsoftokn3.so", softokn3)
GO("libwayland-egl.so.1", waylandegl)
GO("libwayland-client.so.0", waylandclient)
GO("libwayland-cursor.so.0", waylandcursor)
GO("libva.so.2", libva)
GO("libva-drm.so.2", libvadrm)
GO("libva-x11.so.2", libvax11)
GO("libva-wayland.so.2", libvawayland)
GO("libvdpau.so.1", libvdpau)

GO("ld-linux-x86-64.so.2", ldlinux)

GO("libunwind.so.8", unwind)
GO("crashhandler.so", crashhandler)
