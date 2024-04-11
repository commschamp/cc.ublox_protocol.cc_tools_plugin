// Generated by commsdsl2tools_qt v6.3.2

#include "CfgDgnss.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res3.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/CfgDgnss.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace message
{

namespace
{

static QVariantMap createProps_dgnssMode(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgDgnssFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::DgnssMode;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .add("Float", 2)
            .add("Fixed", 3)
            .asMap();
}

static QVariantMap createProps_reserved1(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgDgnssFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved1;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res3(Field::name(), serHidden);
    return props;
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_dgnssMode(false));
    props.append(createProps_reserved1(false));
    return props;
}

} // namespace

class CfgDgnssImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::CfgDgnss<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        CfgDgnssImpl
    >
{
public:
    CfgDgnssImpl() = default;
    CfgDgnssImpl(const CfgDgnssImpl&) = delete;
    CfgDgnssImpl(CfgDgnssImpl&&) = delete;
    virtual ~CfgDgnssImpl() = default;
    CfgDgnssImpl& operator=(const CfgDgnssImpl&) = default;
    CfgDgnssImpl& operator=(CfgDgnssImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgDgnss::CfgDgnss() : m_pImpl(new CfgDgnssImpl) {}
CfgDgnss::~CfgDgnss() = default;

CfgDgnss& CfgDgnss::operator=(const CfgDgnss& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgDgnss& CfgDgnss::operator=(CfgDgnss&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

CfgDgnss::MsgIdParamType CfgDgnss::doGetId()
{
    return ::cc_ublox::message::CfgDgnss<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* CfgDgnss::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgDgnss::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgDgnss::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgDgnss::resetImpl()
{
    m_pImpl->reset();
}

bool CfgDgnss::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgDgnss*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgDgnss::MsgIdParamType CfgDgnss::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgDgnss::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgDgnss::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgDgnss::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgDgnss::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgDgnss::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
