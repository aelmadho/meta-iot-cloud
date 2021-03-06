DESCRIPTION = "Microsoft Azure CDN Resource Management Client Library for Python"

PV = "0.30.2"
PR = "r0"

RDEPENDS_${PN} += "\
	${PYTHON_PN}-azure-common \
	${PYTHON_PN}-azure-mgmt-nspkg \
"

SRCREV = "3632007c401ab7ce1ed8faf6742298f050856a97"

FILES_${PN} = "\
	${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/cdn/* \
	${PYTHON_SITEPACKAGES_DIR}/azure_mgmt_cdn-* \
"

distutils_do_install_append() {
	rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/*.py
	rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/*.pyc
	rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/*.py
	rm -f ${D}${PYTHON_SITEPACKAGES_DIR}/azure/mgmt/*.pyc
}

SRC_DIR = "azure-mgmt-cdn"
