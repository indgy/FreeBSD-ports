PORTNAME=	viennarna
DISTVERSION=	2.5.0
CATEGORIES=	biology
MASTER_SITES=	https://www.tbi.univie.ac.at/RNA/download/sourcecode/2_5_x/
DISTNAME=	ViennaRNA-${DISTVERSION}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Alignment tools for the structural analysis of RNA

LICENSE=	ViennaRNALicense
LICENSE_NAME=	Vienna RNA License
LICENSE_FILE=	${WRKSRC}/COPYING
LICENSE_PERMS=	auto-accept dist-mirror pkg-mirror

BUILD_DEPENDS=	bash:shells/bash \
		libgd>0:graphics/gd # for the static lib
LIB_DEPENDS=	libgmp.so:math/gmp \
		libgsl.so:math/gsl \
		libmpfr.so:math/mpfr

USES=		autoreconf compiler:c++11-lang gmake libtool localbase perl5 pkgconfig xorg # w/out autoreconf -lstdc++ is present in configure and Makefiles and this causes link failure
USE_XORG=	x11 xext # only for build

GNU_CONFIGURE=	yes
CONFIGURE_SHELL=	${PREFIX}/bin/bash
CONFIGURE_ARGS=	--enable-shared --disable-static --with-gsl --with-cluster --with-kinwalker --enable-mpfr --without-python --without-python3 --without-perl

CONFLICTS_INSTALL=	g2 # include/g2.h

INFO=		RNAlib

DATASDIR=	${PREFIX}/share/ViennaRNA
DOCSDIR=	${PREFIX}/share/doc/ViennaRNA
EXAMPLESDIR=	${PREFIX}/share/examples/ViennaRNA

OPTIONS_DEFINE=	DOCS EXAMPLES

PORTDOCS=	*
PORTEXAMPLES=	*

.include <bsd.port.mk>
