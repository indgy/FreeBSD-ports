PORTNAME=	lzlib
PORTVERSION=	0.4.3
PORTREVISION=	1
CATEGORIES=	archivers
PKGNAMEPREFIX=	${LUA_PKGNAMEPREFIX}

MAINTAINER=	daniel@blodan.se
COMMENT=	Lua bindings to the ZLib compression library

LICENSE=	MIT

USES=		cmake lua:51-52,module
USE_GITHUB=	yes
GH_ACCOUNT=	LuaDist
CMAKE_ARGS=	-DINSTALL_LMOD="${LUA_MODSHAREDIR}" \
		-DINSTALL_CMOD="${LUA_MODLIBDIR}" \
		-DINSTALL_DOC="${DOCSDIR}" \
		-DINSTALL_TEST="${EXAMPLESDIR}"

CONFLICTS_INSTALL=	${LUA_PKGNAMEPREFIX}zlib lua[0-9][0-9]-lzlib # lib/lua/5.1/zlib.so share/doc/lzlib/README

OPTIONS_DEFINE=	DOCS EXAMPLES

post-patch:
	@${REINPLACE_CMD} -e '/README/s/install_data/install_doc/' \
		${WRKSRC}/CMakeLists.txt

.include <bsd.port.mk>
