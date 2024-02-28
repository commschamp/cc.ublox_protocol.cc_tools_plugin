// Generated by commsdsl2tools_qt v6.3.0

#include "CfgNmea.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/field/CfgNmeaFilter.h"
#include "cc_tools_qt_plugin/cc_ublox/field/CfgNmeaFlags.h"
#include "cc_tools_qt_plugin/cc_ublox/field/CfgNmeaNumSV.h"
#include "cc_tools_qt_plugin/cc_ublox/field/NmeaVersion.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/CfgNmea.h"

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
    using Field = ::cc_ublox::message::CfgNmeaFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Filter;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_cfgNmeaFilter(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_nmeaVersion(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgNmeaFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::NmeaVersion;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_nmeaVersion(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_numSV(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgNmeaFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::NumSV;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_cfgNmeaNumSV(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_flags(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgNmeaFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Flags;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_cfgNmeaFlags(Field::name(), serHidden);
    return props;
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_filter(false));
    props.append(createProps_nmeaVersion(false));
    props.append(createProps_numSV(false));
    props.append(createProps_flags(false));
    return props;
}

} // namespace

class CfgNmeaImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::CfgNmea<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        CfgNmeaImpl
    >
{
public:
    CfgNmeaImpl() = default;
    CfgNmeaImpl(const CfgNmeaImpl&) = delete;
    CfgNmeaImpl(CfgNmeaImpl&&) = delete;
    virtual ~CfgNmeaImpl() = default;
    CfgNmeaImpl& operator=(const CfgNmeaImpl&) = default;
    CfgNmeaImpl& operator=(CfgNmeaImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgNmea::CfgNmea() : m_pImpl(new CfgNmeaImpl) {}
CfgNmea::~CfgNmea() = default;

CfgNmea& CfgNmea::operator=(const CfgNmea& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgNmea& CfgNmea::operator=(CfgNmea&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

CfgNmea::MsgIdParamType CfgNmea::doGetId()
{
    return ::cc_ublox::message::CfgNmea<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* CfgNmea::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgNmea::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgNmea::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgNmea::resetImpl()
{
    m_pImpl->reset();
}

bool CfgNmea::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgNmea*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgNmea::MsgIdParamType CfgNmea::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgNmea::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgNmea::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgNmea::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgNmea::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgNmea::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
