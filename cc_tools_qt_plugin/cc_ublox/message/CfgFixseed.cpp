// Generated by commsdsl2tools_qt v6.3.4

#include "CfgFixseed.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/field/MsgId.h"
#include "cc_tools_qt_plugin/cc_ublox/field/Res2.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/field/MsgId.h"
#include "cc_ublox/message/CfgFixseed.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace message
{

namespace
{

static QVariantMap createProps_version(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgFixseedFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Version;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_length(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgFixseedFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Length;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .readOnly()
            .asMap();
}

static QVariantMap createProps_reserved1(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgFixseedFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::Reserved1;
    auto props = cc_tools_qt_plugin::cc_ublox::field::createProps_res2(Field::name(), serHidden);
    return props;
}

static QVariantMap createProps_seedHi(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgFixseedFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::SeedHi;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_seedLo(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgFixseedFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::SeedLo;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .asMap();
}

static QVariantMap createProps_list(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::CfgFixseedFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::List;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .serialisedHidden()
            .add(cc_tools_qt_plugin::cc_ublox::field::createProps_msgId(Field::ValueType::value_type::name(), serHidden))
            .appendIndexToElementName()
            .asMap();
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_version(false));
    props.append(createProps_length(false));
    props.append(createProps_reserved1(false));
    props.append(createProps_seedHi(false));
    props.append(createProps_seedLo(false));
    props.append(createProps_list(false));
    return props;
}

} // namespace

class CfgFixseedImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::CfgFixseed<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        CfgFixseedImpl
    >
{
public:
    CfgFixseedImpl() = default;
    CfgFixseedImpl(const CfgFixseedImpl&) = delete;
    CfgFixseedImpl(CfgFixseedImpl&&) = delete;
    virtual ~CfgFixseedImpl() = default;
    CfgFixseedImpl& operator=(const CfgFixseedImpl&) = default;
    CfgFixseedImpl& operator=(CfgFixseedImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

CfgFixseed::CfgFixseed() : m_pImpl(new CfgFixseedImpl) {}
CfgFixseed::~CfgFixseed() = default;

CfgFixseed& CfgFixseed::operator=(const CfgFixseed& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

CfgFixseed& CfgFixseed::operator=(CfgFixseed&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

CfgFixseed::MsgIdParamType CfgFixseed::doGetId()
{
    return ::cc_ublox::message::CfgFixseed<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* CfgFixseed::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& CfgFixseed::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void CfgFixseed::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void CfgFixseed::resetImpl()
{
    m_pImpl->reset();
}

bool CfgFixseed::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const CfgFixseed*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

CfgFixseed::MsgIdParamType CfgFixseed::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus CfgFixseed::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus CfgFixseed::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool CfgFixseed::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t CfgFixseed::lengthImpl() const
{
    return m_pImpl->length();
}

bool CfgFixseed::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
