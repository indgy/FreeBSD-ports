PORTNAME=	libretro-snes9x2005
PORTVERSION=	0.20210214
CATEGORIES=	games

MAINTAINER=	dmenelkir@gmail.com
COMMENT=	Snes9x - Portable Super Nintendo emulator (1.43)

# Commercial users must seek permission from copyright holders.
LICENSE=	PS
LICENSE_NAME=	PS
LICENSE_FILE=	${WRKSRC}/copyright
LICENSE_PERMS=	dist-mirror pkg-mirror auto-accept

USES=		compiler:c++11-lib gmake
USE_LDCONFIG=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	libretro
GH_PROJECT=	snes9x2005
GH_TAGNAME=	218be8e

PLIST_FILES=	lib/libretro/snes9x2005_libretro.so

do-install:
	${MKDIR} ${STAGEDIR}/${PREFIX}/lib/libretro;
	${INSTALL_LIB} ${WRKSRC}/snes9x2005_libretro.so ${STAGEDIR}/${PREFIX}/lib/libretro;

.include <bsd.port.mk>
