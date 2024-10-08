// Generated by commsdsl2tools_qt v6.3.4

#include "CfgNmeaV0.h"

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
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/CfgNmeaV0.h"

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
    using Field = ::cc_ublox::message::CfgNmeaV0Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Filter;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_cfgNmeaFilter(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_nmeaVersion(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgNmeaV0Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::NmeaVersion;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_nmeaVersion(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_numSV(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgNmeaV0Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::NumSV;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_cfgNmeaNumSV(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_flags(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgNmeaV0Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Flags;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_cfgNmeaFlags(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_gnssToFilter(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgNmeaV0Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::GnssToFilter;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_cfgNmeaGnssToFilter(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_svNumbering(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgNmeaV0Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::SvNumbering;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_cfgNmeaSvNumbering(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_mainTalkerId(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgNmeaV0Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::MainTalkerId;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_cfgMainTalkerId(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_gsvTalkerId(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgNmeaV0Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::GsvTalkerId;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_cfgNmeaGsvTalkerId(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_version(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgNmeaV0Fields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Version;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .readOnly()
            .asMap();
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
    return props;
}

} // namespace

class CfgNmeaV0Impl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::CfgNmeaV0<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        CfgNmeaV0Impl
    >
{
public:
    CfgNmeaV0Impl() = default;
    CfgNmeaV0Impl(const CfgNmeaV0Impl&) = delete;
    CfgNmeaV0Impl(CfgNmeaV0Impl&&) = delete;
    virtual ~CfgNmeaV0Impl() = default;
    CfgNmeaV0Impl& operator=(const CfgNmeaV0Impl&) = default;
    CfgNmeaV0Impl& operator=(CfgNmeaV0Impl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgNmeaV0::CfgNmeaV0() : m_pImpl(new CfgNmeaV0Impl) {}
CfgNmeaV0::~CfgNmeaV0() = default;

CfgNmeaV0& CfgNmeaV0::operator=(const CfgNmeaV0& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgNmeaV0& CfgNmeaV0::operator=(CfgNmeaV0&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

CfgNmeaV0::MsgIdParamType CfgNmeaV0::doGetId()
{
    return ::cc_ublox::message::CfgNmeaV0<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* CfgNmeaV0::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgNmeaV0::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgNmeaV0::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgNmeaV0::resetImpl()
{
    m_pImpl->reset();
}

bool CfgNmeaV0::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgNmeaV0*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgNmeaV0::MsgIdParamType CfgNmeaV0::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgNmeaV0::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgNmeaV0::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgNmeaV0::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgNmeaV0::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgNmeaV0::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
