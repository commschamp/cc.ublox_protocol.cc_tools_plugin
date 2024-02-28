// Generated by commsdsl2tools_qt v6.3.0

#include "AidAlpData.h"

#include "cc_tools_qt/ProtocolMessageBase.h"
#include "cc_tools_qt/property/field.h"
#include "cc_tools_qt_plugin/cc_ublox/options/DefaultOptions.h"
#include "cc_ublox/message/AidAlpData.h"

namespace cc_tools_qt_plugin
{

namespace cc_ublox
{

namespace message
{

namespace
{

struct AlpDataMembers
{
    static QVariantMap createProps_element(bool serHidden)
    {
        static_cast<void>(serHidden);
        using Field = ::cc_ublox::message::AidAlpDataFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::AlpDataMembers::Element;
        return
            cc_tools_qt::property::field::ForField<Field>()
                .name(Field::name())
                .serialisedHidden(serHidden)
                .asMap();
    }
}; // struct AlpDataMembers

static QVariantMap createProps_alpData(bool serHidden)
{
    static_cast<void>(serHidden);
    using Field = ::cc_ublox::message::AidAlpDataFields<cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::AlpData;
    return
        cc_tools_qt::property::field::ForField<Field>()
            .name(Field::name())
            .serialisedHidden(serHidden)
            .serialisedHidden()
            .add(AlpDataMembers::createProps_element(serHidden))
            .appendIndexToElementName()
            .asMap();
}

QVariantList createProps()
{
    QVariantList props;
    props.append(createProps_alpData(false));
    return props;
}

} // namespace

class AidAlpDataImpl : public
    cc_tools_qt::ProtocolMessageBase<
        ::cc_ublox::message::AidAlpData<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>,
        AidAlpDataImpl
    >
{
public:
    AidAlpDataImpl() = default;
    AidAlpDataImpl(const AidAlpDataImpl&) = delete;
    AidAlpDataImpl(AidAlpDataImpl&&) = delete;
    virtual ~AidAlpDataImpl() = default;
    AidAlpDataImpl& operator=(const AidAlpDataImpl&) = default;
    AidAlpDataImpl& operator=(AidAlpDataImpl&&) = default;

protected:
    virtual const QVariantList& fieldsPropertiesImpl() const override
    {
        static const QVariantList Props = createProps();
        return Props;
    }
};

AidAlpData::AidAlpData() : m_pImpl(new AidAlpDataImpl) {}
AidAlpData::~AidAlpData() = default;

AidAlpData& AidAlpData::operator=(const AidAlpData& other)
{
    *m_pImpl = *other.m_pImpl;
    return *this;
}

AidAlpData& AidAlpData::operator=(AidAlpData&& other)
{
    *m_pImpl = std::move(*other.m_pImpl);
    return *this;
}

AidAlpData::MsgIdParamType AidAlpData::doGetId()
{
    return ::cc_ublox::message::AidAlpData<cc_tools_qt_plugin::cc_ublox::Message, cc_tools_qt_plugin::cc_ublox::options::DefaultOptions>::doGetId();
}

const char* AidAlpData::nameImpl() const
{
    return static_cast<const cc_tools_qt::Message*>(m_pImpl.get())->name();
}

const QVariantList& AidAlpData::fieldsPropertiesImpl() const
{
    return m_pImpl->fieldsProperties();
}

void AidAlpData::dispatchImpl(cc_tools_qt::MessageHandler& handler)
{
    static_cast<cc_tools_qt::Message*>(m_pImpl.get())->dispatch(handler);
}

void AidAlpData::resetImpl()
{
    m_pImpl->reset();
}

bool AidAlpData::assignImpl(const cc_tools_qt::Message& other)
{
    auto* castedOther = dynamic_cast<const AidAlpData*>(&other);
    if (castedOther == nullptr) {
        return false;
    }
    return m_pImpl->assign(*castedOther->m_pImpl);
}

AidAlpData::MsgIdParamType AidAlpData::getIdImpl() const
{
    return m_pImpl->getId();
}

comms::ErrorStatus AidAlpData::readImpl(ReadIterator& iter, std::size_t len)
{
    return m_pImpl->read(iter, len);
}

comms::ErrorStatus AidAlpData::writeImpl(WriteIterator& iter, std::size_t len) const
{
    return m_pImpl->write(iter, len);
}

bool AidAlpData::validImpl() const
{
    return m_pImpl->valid();
}

std::size_t AidAlpData::lengthImpl() const
{
    return m_pImpl->length();
}

bool AidAlpData::refreshImpl()
{
    return m_pImpl->refresh();
}

} // namespace message

} // namespace cc_ublox

} // namespace cc_tools_qt_plugin
