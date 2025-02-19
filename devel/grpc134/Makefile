# Created by: vanilla@

PORTNAME=	grpc
PORTVERSION=	1.34.1
PORTREVISION=	1
DISTVERSIONPREFIX=	v
CATEGORIES=	devel
PKGNAMESUFFIX=	134

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	HTTP/2-based RPC framework

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libabsl_base.so:devel/abseil \
		libbenchmark.so:devel/benchmark \
		libcares.so:dns/c-ares \
		libgflags.so:devel/gflags \
		libprotobuf.so:devel/protobuf \
		libre2.so:devel/re2

USES=		cmake compiler:c++17-lang cpe localbase:ldflags pkgconfig ssl

USE_GITHUB=	yes

CMAKE_ARGS=	-DCMAKE_CXX_STANDARD=17 \
		-DgRPC_ABSL_PROVIDER=package \
		-DgRPC_BENCHMARK_PROVIDER=package \
		-DgRPC_CARES_PROVIDER=package \
		-DgRPC_GFLAGS_PROVIDER=package \
		-DgRPC_PROTOBUF_PROVIDER=package \
		-DgRPC_RE2_PROVIDER=package \
		-DgRPC_SSL_PROVIDER=package \
		-DgRPC_ZLIB_PROVIDER=package
CMAKE_ON=	BUILD_SHARED_LIBS
USE_LDCONFIG=	yes

CONFLICTS_INSTALL=	grpc grpc130 grpc142

PLIST_SUB=	PORTVERSION=${PORTVERSION}

.include <bsd.port.mk>
