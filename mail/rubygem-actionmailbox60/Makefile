# Created by: Po-Chuan Hsieh <sunpoet@FreeBSD.org>

PORTNAME=	actionmailbox
PORTVERSION=	6.0.4.6
CATEGORIES=	mail rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	60

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Receive and process incoming emails in Rails applications

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

RUN_DEPENDS=	rubygem-actionpack60>=${PORTVERSION}:www/rubygem-actionpack60 \
		rubygem-activejob60>=${PORTVERSION}:devel/rubygem-activejob60 \
		rubygem-activerecord60>=${PORTVERSION}:databases/rubygem-activerecord60 \
		rubygem-activestorage60>=${PORTVERSION}:net/rubygem-activestorage60 \
		rubygem-activesupport60>=${PORTVERSION}:devel/rubygem-activesupport60 \
		rubygem-mail>=2.7.1,2:mail/rubygem-mail

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

PORTSCOUT=	limit:^6\.0\.

.include <bsd.port.mk>
