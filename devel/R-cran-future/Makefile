PORTNAME=	future
PORTVERSION=	1.24.0
CATEGORIES=	devel
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Unified Parallel and Distributed Processing in R for Everyone

LICENSE=	LGPL21+

CRAN_DEPENDS=	R-cran-digest>0:security/R-cran-digest \
		R-cran-globals>=0.14.0:devel/R-cran-globals \
		R-cran-listenv>=0.8.0:devel/R-cran-listenv \
		R-cran-parallelly>=1.30.0:devel/R-cran-parallelly
BUILD_DEPENDS=	${CRAN_DEPENDS}
RUN_DEPENDS=	${CRAN_DEPENDS}

USES=		cran:auto-plist

.include <bsd.port.mk>
