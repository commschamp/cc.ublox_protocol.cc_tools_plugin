// Generated by commsdsl2tools_qt v6.3.3

#include "CfgRate.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/CfgRate.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace message
{

namespace
{

static QVariantMap createProps_measRate(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgRateFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::MeasRate;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_navRate(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgRateFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::NavRate;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_timeRef(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgRateFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::TimeRef;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .add("UTC", 0)
            .add("GPS", 1)
            .add("GLONASS", 2)
            .add("BeiDou", 3)
            .add("Galileo", 4)
            .asMap();
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_measRate(false));
    props.append(createProps_navRate(false));
    props.append(createProps_timeRef(false));
    return props;
}

} // namespace

class CfgRateImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::CfgRate<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        CfgRateImpl
    >
{
public:
    CfgRateImpl() = default;
    CfgRateImpl(const CfgRateImpl&) = delete;
    CfgRateImpl(CfgRateImpl&&) = delete;
    virtual ~CfgRateImpl() = default;
    CfgRateImpl& operator=(const CfgRateImpl&) = default;
    CfgRateImpl& operator=(CfgRateImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgRate::CfgRate() : m_pImpl(new CfgRateImpl) {}
CfgRate::~CfgRate() = default;

CfgRate& CfgRate::operator=(const CfgRate& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgRate& CfgRate::operator=(CfgRate&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

CfgRate::MsgIdParamType CfgRate::doGetId()
{
    return ::cc_ublox::message::CfgRate<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* CfgRate::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgRate::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgRate::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgRate::resetImpl()
{
    m_pImpl->reset();
}

bool CfgRate::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgRate*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgRate::MsgIdParamType CfgRate::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgRate::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgRate::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgRate::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgRate::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgRate::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
