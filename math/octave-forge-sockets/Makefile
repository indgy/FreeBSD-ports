# Created by: Stephen Montgomery-Smith <stephen@math.missouri.edu>

PORTNAME=	octave-forge-sockets
PORTVERSION=	1.3.0
CATEGORIES=	math

MAINTAINER=	stephen@FreeBSD.org
COMMENT=	Octave-forge package ${OCTAVE_PKGNAME}

LICENSE=	GPLv3
LICENSE_FILE=	${WRKDIR}/${OCTSRC}/COPYING

# OCTSRC is the name of the directory of the package.
# It is usually ${OCTAVE_PKGNAME} or ${DISTNAME}.
OCTSRC=		${DISTNAME}

WRKSRC=		${WRKDIR}/${OCTSRC}/src

BUILD_DEPENDS+=	gsed:textproc/gsed

.include "${.CURDIR}/../../Mk/bsd.octave.mk"

post-patch:
	${REINPLACE_CMD} 's/sed/gsed/g' ${WRKSRC}/Makefile

post-build:
	${RM} ${WRKSRC}/Makefile ${WRKSRC}/configure
	cd ${WRKDIR} && ${TAR} cfz ${DISTNAME}.tar.gz ${OCTSRC}

.include <bsd.port.mk>
