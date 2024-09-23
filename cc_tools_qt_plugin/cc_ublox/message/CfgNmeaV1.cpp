// Generated by commsdsl2tools_qt v6.3.4

#include "CfgNmeaV1.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/field/CfgMainTalkerId.h"
#include "cc_tools_qt_plugin/cc_ublox/field/CfgNmeaFilter.h"
#include "cc_tools_qt_plugin/cc_ublox/field/CfgNmeaFlags.h"
#include "cc_tools_qt_plugin/cc_ublox/field/CfgNmeaGnssToFilter.h"
#include "cc_tools_qt_plugin/cc_ublox/field/CfgNmeaGsvTalkerId.h"
#include "cc_tools_qt_plugin/cc_ublox/field/CfgNmeaNumSV.h"
#include "cc_tools_qt_plugin/cc_ublox/field/CfgNmeaSvNumbering.h"
#include "cc_tools_qt_plugin/cc_ublox/field/NmeaVersion.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res6.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/CfgNmeaV1.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace message
{

namespace
{

static QVariantMap createProps_filter(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgNmeaV1Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Filter;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_cfgNmeaFilter(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_nmeaVersion(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgNmeaV1Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::NmeaVersion;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_nmeaVersion(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_numSV(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgNmeaV1Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::NumSV;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_cfgNmeaNumSV(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_flags(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgNmeaV1Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Flags;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_cfgNmeaFlags(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_gnssToFilter(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgNmeaV1Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::GnssToFilter;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_cfgNmeaGnssToFilter(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_svNumbering(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgNmeaV1Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::SvNumbering;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_cfgNmeaSvNumbering(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_mainTalkerId(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgNmeaV1Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::MainTalkerId;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_cfgMainTalkerId(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_gsvTalkerId(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgNmeaV1Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::GsvTalkerId;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_cfgNmeaGsvTalkerId(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_version(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgNmeaV1Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Version;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .readOnly()
            .asMap();
}

static QVariantMap createProps_bdsTalkerId(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgNmeaV1Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::BdsTalkerId;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_reserved1(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgNmeaV1Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved1;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res6(Field::name(), serHidden);
    return props;
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_filter(false));
    props.append(createProps_nmeaVersion(false));
    props.append(createProps_numSV(false));
    props.append(createProps_flags(false));
    props.append(createProps_gnssToFilter(false));
    props.append(createProps_svNumbering(false));
    props.append(createProps_mainTalkerId(false));
    props.append(createProps_gsvTalkerId(false));
    props.append(createProps_version(false));
    props.append(createProps_bdsTalkerId(false));
    props.append(createProps_reserved1(false));
    return props;
}

} // namespace

class CfgNmeaV1Impl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::CfgNmeaV1<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        CfgNmeaV1Impl
    >
{
public:
    CfgNmeaV1Impl() = default;
    CfgNmeaV1Impl(const CfgNmeaV1Impl&) = delete;
    CfgNmeaV1Impl(CfgNmeaV1Impl&&) = delete;
    virtual ~CfgNmeaV1Impl() = default;
    CfgNmeaV1Impl& operator=(const CfgNmeaV1Impl&) = default;
    CfgNmeaV1Impl& operator=(CfgNmeaV1Impl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgNmeaV1::CfgNmeaV1() : m_pImpl(new CfgNmeaV1Impl) {}
CfgNmeaV1::~CfgNmeaV1() = default;

CfgNmeaV1& CfgNmeaV1::operator=(const CfgNmeaV1& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgNmeaV1& CfgNmeaV1::operator=(CfgNmeaV1&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

CfgNmeaV1::MsgIdParamType CfgNmeaV1::doGetId()
{
    return ::cc_ublox::message::CfgNmeaV1<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* CfgNmeaV1::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgNmeaV1::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgNmeaV1::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgNmeaV1::resetImpl()
{
    m_pImpl->reset();
}

bool CfgNmeaV1::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgNmeaV1*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgNmeaV1::MsgIdParamType CfgNmeaV1::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgNmeaV1::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgNmeaV1::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgNmeaV1::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgNmeaV1::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgNmeaV1::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
