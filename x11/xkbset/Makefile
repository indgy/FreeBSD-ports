# Created by: Stephen Montgomery-Smith <stephen@math.missouri.edu>

PORTNAME=	xkbset
PORTVERSION=	0.7
DISTVERSIONPREFIX=	v
CATEGORIES=	x11

MAINTAINER=	stephen@FreeBSD.org
COMMENT=	Manage various XKB features of X Window

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYRIGHT

USE_GITHUB=	yes
GH_ACCOUNT=	stephenmontgomerysmith

USES=		perl5 xorg
USE_XORG=	x11
USE_PERL5=	build

MAKE_ARGS=	X11BASE="${LOCALBASE}" X11PREFIX="${PREFIX}" \
		INSTALL_DATA="${INSTALL_DATA}" \
		INSTALL_PROGRAM="${INSTALL_PROGRAM}"

OPTIONS_DEFINE=	GUI
GUI_DESC=	Install Tk GUI

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MGUI}
RUN_DEPENDS+=	p5-Tk>=0:x11-toolkits/p5-Tk
PLIST_SUB+=	GUI=""
MAKE_ARGS+=	INSTALL_SCRIPT="${INSTALL_SCRIPT}"
.else
PLIST_SUB+=	GUI="@comment "
MAKE_ARGS+=	INSTALL_SCRIPT=:
.endif

.include <bsd.port.mk>
