// Generated by commsdsl2tools_qt v6.3.0

#include "CfgInf.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/field/InfMask.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res3.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/CfgInf.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace message
{

namespace
{

static QVariantMap createProps_protocolId(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgInfFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::ProtocolId;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .add("UBX", 0)
            .add("NMEA", 1)
            .asMap();
}

static QVariantMap createProps_reserved1(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgInfFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved1;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res3(Field::name(), serHidden);
    return props;
}

struct InfMsgMaskMembers
{
    static QVariantMap createProps_element(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::CfgInfFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::InfMsgMaskMembers::Element;
        auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_infMask(Field::name(), serHidden);
        return props;
    }
}; // struct InfMsgMaskMembers

static QVariantMap createProps_infMsgMask(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgInfFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::InfMsgMask;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .serialisedHidden()
            .add(InfMsgMaskMembers::createProps_element(serHidden))
            .appendIndexToElementName()
            .asMap();
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_protocolId(false));
    props.append(createProps_reserved1(false));
    props.append(createProps_infMsgMask(false));
    return props;
}

} // namespace

class CfgInfImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::CfgInf<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        CfgInfImpl
    >
{
public:
    CfgInfImpl() = default;
    CfgInfImpl(const CfgInfImpl&) = delete;
    CfgInfImpl(CfgInfImpl&&) = delete;
    virtual ~CfgInfImpl() = default;
    CfgInfImpl& operator=(const CfgInfImpl&) = default;
    CfgInfImpl& operator=(CfgInfImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgInf::CfgInf() : m_pImpl(new CfgInfImpl) {}
CfgInf::~CfgInf() = default;

CfgInf& CfgInf::operator=(const CfgInf& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgInf& CfgInf::operator=(CfgInf&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

CfgInf::MsgIdParamType CfgInf::doGetId()
{
    return ::cc_ublox::message::CfgInf<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* CfgInf::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgInf::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgInf::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgInf::resetImpl()
{
    m_pImpl->reset();
}

bool CfgInf::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgInf*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgInf::MsgIdParamType CfgInf::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgInf::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgInf::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgInf::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgInf::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgInf::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin