// Generated by commsdsl2tools_qt v6.3.3

#include "CfgHnr.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res3.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/CfgHnr.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace message
{

namespace
{

static QVariantMap createProps_highNavRate(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgHnrFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::HighNavRate;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_reserved1(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgHnrFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved1;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res3(Field::name(), serHidden);
    return props;
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_highNavRate(false));
    props.append(createProps_reserved1(false));
    return props;
}

} // namespace

class CfgHnrImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::CfgHnr<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        CfgHnrImpl
    >
{
public:
    CfgHnrImpl() = default;
    CfgHnrImpl(const CfgHnrImpl&) = delete;
    CfgHnrImpl(CfgHnrImpl&&) = delete;
    virtual ~CfgHnrImpl() = default;
    CfgHnrImpl& operator=(const CfgHnrImpl&) = default;
    CfgHnrImpl& operator=(CfgHnrImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgHnr::CfgHnr() : m_pImpl(new CfgHnrImpl) {}
CfgHnr::~CfgHnr() = default;

CfgHnr& CfgHnr::operator=(const CfgHnr& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgHnr& CfgHnr::operator=(CfgHnr&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

CfgHnr::MsgIdParamType CfgHnr::doGetId()
{
    return ::cc_ublox::message::CfgHnr<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* CfgHnr::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgHnr::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgHnr::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgHnr::resetImpl()
{
    m_pImpl->reset();
}

bool CfgHnr::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgHnr*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgHnr::MsgIdParamType CfgHnr::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgHnr::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgHnr::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgHnr::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgHnr::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgHnr::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
